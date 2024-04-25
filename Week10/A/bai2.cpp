#include <bits/stdc++.h>
using namespace std;
int main() {
    int* p=new int;
    int* p2=p;
    *p=20;
    cout<<p<<endl; //0xf37f58
    cout<<p2<<endl; //0xf37f58
    cout<<*p2<<endl; //20
    delete p; 
    cout<<p2<<endl; //0xf37f58
    cout<<*p2<<endl; //15956704
    *p2 = 100;
    cout << *p2;//100
    delete p2;
    //xóa p làm chương trình bị đơ, đồng thời nó gán cho p2 một giá trị ngẫu nhiên
    //vì việc giải phóng p đã khiến con trỏ p2 chỉ vào vùng nhớ không còn hiệu lực
}
