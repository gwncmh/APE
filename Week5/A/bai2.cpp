#include <iostream>
#include <cstring>
using namespace std;
char a1[5];
char a2[6] = "abcd";
char a3[] = "abcd";
void print(char a[], int size) {
    for (int i=0; i<size;i++) {
        cout<<a[i];
    }
    cout<<endl;
}

int main() {
    char a11[5];
    //char a21[3] = "abcd";
    //char a22[4] = "abcd";
    char a31[] = "abcd";

    cout<<sizeof(a1)<<endl;
    cout<<sizeof(a11)<<endl;
    cout<<sizeof(a2)<<endl;
    //cout<<sizeof(a21)<<endl;
    //cout<<sizeof(a22)<<endl;
    cout<<sizeof(a3)<<endl;
    cout<<sizeof(a31)<<endl;

    print(a1, sizeof(a1));
    print(a11, sizeof(a11));
    print(a2, sizeof(a2));
    // print(a21), sizeof(a21)); 
    // print(a22, sizeof(a22));
    print(a3, sizeof(a3));
    print(a31, sizeof(a31));
}
