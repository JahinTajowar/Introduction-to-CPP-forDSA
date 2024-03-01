/*********************************
https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/V
*********************************/
#include <bits/stdc++.h>
#define pb push_back
#define ppb pop_back
#define c child
#define vec vector
#define mat matrix
#define ll long long
#define pi pair
using namespace std;

int main() {
    int A, B;
    char S;

    cin >> A >> S >> B;

    if (S == '<') {
        if (A < B) {
            cout << "Right";
        } else {
            cout << "Wrong";
        }
    } else if (S == '>') {
        if (A > B) {
            cout << "Right";
        } else {
            cout << "Wrong";
        }
    } else if (S == '=') {
        if (A == B) {
            cout << "Right";
        } else {
            cout << "Wrong";
        }
    }

    return 0;
}
