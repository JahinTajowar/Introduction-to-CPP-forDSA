/*
https://www.hackerrank.com/contests/mid-term-a-introduction-to-c-for-dsa-a-batch-04/challenges/sort-it-2-1-1
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
    ios::sync_with_stdio(false);
    cin.tie(NULL); 
    int n;
    cin>>n;
    vec<int> a(n);
    for(int i=0; i<n; i++)
    {
     cin>>a[i];
    }
    //rivers Sorting
    sort(a.rbegin(),a.rend());
    for(int i=0; i<n; i++)
    {
     cout<<a[i]<<" ";
    }

    cout<<endl;
    return 0;
}