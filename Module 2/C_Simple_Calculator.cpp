/*******************
https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/C
*******************/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b;
    cin>>a>>b;
    long long int x=a+b;
    long long int y=a*b;
    long long int z=a-b;
    cout << a << " + " << b << " = " << x << endl;
    cout << a << " * " << b << " = " << y << endl;
    cout << a << " - " << b << " = " << z << endl;
    return 0;
}