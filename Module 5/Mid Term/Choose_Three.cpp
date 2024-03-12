/*
https://www.hackerrank.com/contests/mid-term-a-introduction-to-c-for-dsa-a-batch-04/challenges/choose-three
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
bool isPossibleSum(vec<int> &arr, int n,int s)
{
    for(int i=0; i<n-2; i++)
    {
        for(int j=i+1; j<n-1; j++)
        {
            for(int k=j+1; k<n; k++)
            {
                if(arr[i]+arr[j]+arr[k]==s)
                {
                    return true;
                }
            }
        }
    }
    return false;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL); 
    int t;
    cin>>t;
    while(t--)
    {
        int n,s;
        cin>>n>>s;
        vec<int> a(n);
        for(int i=0; i<n; i++)
        {
         cin>>a[i];
        }
        if(isPossibleSum(a,n,s))
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}