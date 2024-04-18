#include <iostream>
using namespace std;
char c[]="123345";
char* weird_string() {
   return c;
}
int main()
{
    cout<<weird_string()<<endl;
}
