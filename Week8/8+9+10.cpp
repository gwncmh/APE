#include <iostream>
using namespace std;
struct Point {
    int x, y;
};
void printaddr(Point p) {
    cout<<&p<<endl;
    cout<<&p.x<<endl;
    cout<<&p.y<<endl;
} //8
void passbyval(Point p) {
    cout<<&p<<endl;
}
void passbyref(Point &p) {
    cout<<&p<<endl;
} //9
struct Struct {
    int a[10];
};
void shallowcopy() {
    Struct a1;
    for(int i=0; i<10; i++) {
        a1.a[i]=i;
    }
    Struct a2=a1;
    a2.a[0]=100;
    cout<<a1.a[0]<<endl;
} //10
int main() {
    Point p;
    p.x=10;
    p.y=20;
    printaddr(p);
    passbyval(p);
    passbyref(p);
    shallowcopy();
}
