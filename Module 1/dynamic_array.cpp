/*****************
WAP for Dynamic array.
****************/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    cout<<"Take an Array size: ";
    int n;
    cin >> n;
    int *a = new int[n];
    cout<<"Input "<<n<<" Number :";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout <<"Your Taken Number is: ";
    for (int i = 0; i < n; i++)
    {
        cout <<a[i] <<" ";
    }
    return 0;
}
