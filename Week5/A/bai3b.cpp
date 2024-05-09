#include <iostream>
using namespace std;
void printArray(char arr[2][12]) {
    for (int i=0; i<2; i++) {
        for (int j=0; j<12; j++) {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}
int main() {
    // Thử chỉ khởi tạo một phần của mảng bằng cách xóa bớt các giá trị khởi tạo
    char daytab1[2][12] = {
        {31,28,31,30,31,30,31,31,30,31},
        {31,29,31,30,31,30,31,31,30,31,30,31}
    };
    cout<<"Cach 1:"<<endl;
    printArray(daytab1);
    char daytab2[2][12] = {
        31,28,31,30,31,30,31,31,30,31,30,31,
        31,29,31,30,31,30,31,31,30,31 
    };
    cout<<"Cach 2:"<<endl;
    printArray(daytab2);
    //không in ra kí tự nữa
}
