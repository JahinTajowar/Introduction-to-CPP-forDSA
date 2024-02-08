/********************
WAP for check ODD and EVEN
*********************/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cout<<"Take a Number:";
    cin >> x;
    switch (x % 2)
    {
    case 0:
        cout <<x<< " is an Even Number.";
        break;
    case 1:
        cout<<x << " is an Odd Number.";
        break;
    }
    return 0;
}
