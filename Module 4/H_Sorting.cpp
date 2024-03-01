/*
https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/H
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
    int n;
    cin>>n;
    int ar[n];
    for(int i=0; i<n; i++)
    {
     cin>>ar[i];
    }
    for(int i=0; i<n; i++)
    {
     for(int j=1; j<n; j++)
     {
        if(ar[j]<ar[j-1])
        {
            swap(ar[j],ar[j-1]);
        }
     
     }
    }
    sort(ar, +ar+1);
    for(int i=0; i<n; i++)
    {
     cout<<ar[i]<<" ";
    }
    return 0;
}