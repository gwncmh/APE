#include <iostream>
using namespace std;
int count_even(int *arr, int size)
{
    int ans=0;
    for (int i=0; i<n; i++) if (*(a + i)%2==0) ans++;
    return ans;
}
int main()
{
    int *arr= new int[10] {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<count_even(arr,5)<<endl;
    cout<<count_even(arr+5,5)<<endl;
    delete[] arr;
}
