#include <bits/stdc++.h>
using namespace std;
char* concat(const char* a, const char* b) {
    int len1=strlen(a);
    int len2=strlen(b);
    char* re = new char[len1+len2+1];
    strcpy(re, a);
    strcat(re, b);
    return re;
}

int main(){
    const char* a = "Hello ";
    const char* b = "World";
    char* s = concat(a, b);
    cout<<s<<endl;
    delete[] s;
}
