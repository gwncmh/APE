#include<iostream>
using namespace std;
void f1(int a[]) {
    cout<<sizeof(a)<<endl;
}
void f2(int a[3]) {
    cout<<sizeof(a)<<endl;
}

int main() {
    int A[3] = {1,2,3};
    cout<<sizeof(A)<<endl;
    f1(A);
    f2(A);
}
