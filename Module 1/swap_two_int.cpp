/*****************************
WAP For the Swap two integer
******************************/
#include <bits/stdc++.h>
using namespace std;
 void my_swap(int *a, int *b)
 {
    int tmp = *a;
   *a = *b;
   *b = tmp;
}
int main()
{
    int a, b;
    cout<<"Take Two Integer: ";
    cin >> a >> b;
    swap(a, b);
    cout <<"Swap output is:  "<< a << " " << b << endl;
    return 0;
}
