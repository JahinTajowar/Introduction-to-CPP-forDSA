
/*************************
https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/G
*************************/
#include<bits/stdc++.h>
#define pb push_back
#define ppb pop_back
#define c child
#define vec vector
#define mat matrix
#define ll long long
#define pi pair
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> a(n); 
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    int i = 0, flag = 0;
    int j = n - 1; 
    
    while (i < j) {
        if (a[i] != a[j]) {
            flag = 1;
            break;
        }
        i++; 
        j--; 
    }
    if (flag == 1) {
        cout << "NO";
    } else {
        cout << "YES";
    }
    return 0;
}
