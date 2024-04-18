#include <iostream>
using namespace std;
struct Point {
    int x, y;
};
void print(Point p) {
    cout << p.x << " " << p.y;
}
void vbv(Point p) {
    p.x = 20;
    p.y = 30;
}
void vbr(Point &p) {
    p.x = 40;
    p.y = 50;
}

int main() {
    Point point;
    changeValueByValue(point);
    print(point); 
    changeValueByReference(point);
    print(point); 

}
