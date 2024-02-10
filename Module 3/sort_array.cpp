/****************************
WAP use array for sort n integer
***********************************/
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cout<<"Take an Array size: ";
    cin >> n;
    int a[n];
    cout<<"Take "<<n<<" integers: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a, a + n, greater<int>());
    for (int i = 0; i < n; i++) {
        cout <<"Sorted output is: " a[i] << " ";
    }
    return 0;
}
