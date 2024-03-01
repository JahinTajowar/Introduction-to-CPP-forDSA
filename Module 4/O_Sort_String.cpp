/*
https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/O
*/

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
    int a[132]={};
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        char s;
        cin>>s;
        a[s]++;
    }
    for(int i=0; i<123; i++)
    {
        if(a[i]!=0)
        while(a[i]--)
        {
        cout<<(char)(i);
        }
        
    }
    return 0;
}