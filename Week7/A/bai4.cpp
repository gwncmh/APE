#include <bits/stdc++.h>
using namespace std;
bool binary_search(int* a, int n, int x) {
    int left=0, right=n-1;
    while(left<=right) {
        int mid=(left+right)/2;
        if(x==*(a+mid)) {
            return true;
        }
        else if (x>*(a+mid)) {
            left=mid+1;
        }
        else {
            right=mid-1;
        }
    }
    return false;
}
int main() {
    int n,m;
    cin>>n>>m;
    int a[n],b[m];
    for(int i=0; i<n; i++) {
        cin>>a[i];
    }
    for(int i=0 ; i<m; i++) {
        cin>>b[i];
    }
    for(int i=0; i<m; i++) {
        if(binary_search(a,n,b[i])) cout<<"YES"<<" ";
        else cout<<"NO"<<" ";
    }
}
