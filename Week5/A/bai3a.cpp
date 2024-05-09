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
    // Cách 1
    char daytab1[2][12] = {
        {31,28,31,30,31,30,31,31,30,31,30,31},
        {31,29,31,30,31,30,31,31,30,31,30,31}
    };
    cout<<"Cach 1:"<<endl;
    printArray(daytab1);
    // Cách 2
    char daytab2[2][12] = {
        31,28,31,30,31,30,31,31,30,31,30,31,
        31,29,31,30,31,30,31,31,30,31,30,31
    };
    cout<<"Cach 2:"<<endl;
    printArray(daytab2);
}
