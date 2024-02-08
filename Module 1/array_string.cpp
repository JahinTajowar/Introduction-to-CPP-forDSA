/********************************
WAP for Print array size integer and string.
*********************************/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    char s[100];
    int a;
    cout<<"Take an integer: ";
    cin >> a;
    getchar();
    cout<<"Take a string: ";
    cin.getline(s, 100);
    cout <<"Output  Integer is: "<< a << endl;
    cout << "Output  String is: "<<s << endl;
    return 0;
}
