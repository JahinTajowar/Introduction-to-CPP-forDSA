/*
https://www.hackerrank.com/contests/mid-term-a-introduction-to-c-for-dsa-a-batch-04/challenges/monkey-1-2
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
    string ln;
    while(getline(cin,ln))
    {
        ln.erase(remove(ln.begin(),ln.end(),' '), ln.end());
        sort(ln.begin(),ln.end());
        cout<<ln<<endl;
    }
    return 0;
}