/*******************
https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/E
*******************/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    cin>>n;
    long long int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    long long int max=a[0];
    for(int i=0; i<n; i++)
    {
        if(a[i] > max)
        {
            max = a[i];
        }    
    }
    cout<<max<<endl;
    return 0;
}