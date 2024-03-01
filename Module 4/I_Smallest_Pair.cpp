/*
https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/I
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
 int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int minSum = INT_MAX;
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                int cSum = a[i] + a[j] + (j - i);
                minSum = min(minSum, cSum);
            }
        }

        cout << minSum << endl;
    }
    return 0;
}