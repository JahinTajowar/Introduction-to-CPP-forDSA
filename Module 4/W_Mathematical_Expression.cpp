/***********************
https://codeforces.com/group/MWSDmqGsZm/contest/219158/submission/232924751
**********************/
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
    int A, B, C;
    char S, Q;
    cin >> A >> S >> B >> Q >> C;
    if (S == '+') {
        if (A + B == C && Q == '=') {
            cout << "Yes";
        } else {
            cout << A + B;
        }
    } else if (S == '-') {
        if (A - B == C && Q == '=') {
            cout << "Yes";
        } else {
            cout << A - B;
        }
    } else if (S == '*') {
        if (A * B == C && Q == '=') {
            cout << "Yes";
        } else {
            cout << A * B;
        }
    }
    return 0;
}