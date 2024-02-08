/*********************************************
https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/K
*********************************************/
#include<bits/stdc++.h>
using namespace std;
int main() {
    long long int a,b,c;
    cin>>a>>b>>c;
    long long int minVal=min({a,b,c});
    long long int maxVal=max({a,b,c});
    cout<<minVal<<" "<<maxVal;
    return 0;
}