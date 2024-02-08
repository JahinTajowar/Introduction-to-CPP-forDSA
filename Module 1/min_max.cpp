/********************************
WAP for take an array for n integer and find out maximum and minimum vale.
*********************************/
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " integers: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    int min_val = INT_MAX;
    int max_val = INT_MIN;
    for (int i = 0; i < n; ++i) {
        min_val = min(min_val, arr[i]);
        max_val = max(max_val, arr[i]);
    }
    cout << "Minimum value in the array: " << min_val << endl;
    cout << "Maximum value in the array: " << max_val << endl;

    return 0;
}
