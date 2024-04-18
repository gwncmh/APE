#include <iostream>
using namespace std;
int a1[5];
int a2[5]={1, 2, 3, 4}; 
int a3[]={1, 2, 3, 4}; 

void print(int a[], int n) {
    for(int i=0; i<n; i++) {
        cout<<a[i]<<' ';
    }
    cout<<endl;
}

int main() {
    
    int a4[5];
    // int arr5[3]={1, 2, 3, 4}; (số lượng giá trị khởi tạo vượt quá kích thước của mảng)
    int a6[]={1, 2, 3, 4}; 

    print(a1, 5);
    print(a2, 5);
    print(a3, 4);
    print(a4, 5);
    // printArray(arr5, 3); (mảng không tồn tại)
    printArray(a6, 4);
}
