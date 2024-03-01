#include<bits/stdc++.h>
#define pb push_back
#define ppb pop_back
#define c child
#define vec vector
#define mat matrix
#define ll long long
#define pi pair
using namespace std;
int main()
{
    int n;
    cout<<" Take Array Size: ";
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    {
     cout<<" input "<<n<<" Elements: ";
     cin>>a[i];
    }
    cout<<" Sorted output is: ";
    sort(a,a+n,greater<int>());
    
    for(int i=0; i<n; i++)
    {
     cout<< a[i]<<" ";
    }
    return 0;
}
