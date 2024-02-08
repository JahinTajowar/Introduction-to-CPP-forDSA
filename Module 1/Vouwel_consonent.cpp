/**********************************
WAP for the check vowel or Consonent.
**********************************/
#include <bits/stdc++.h>
using namespace std;

int main() {
    char x;

    cout << "Enter a character: ";
    cin >> x;

    if (x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u') {
        cout << "It's a Vowel";
    } else {
        cout << "It's a Consonant";
    }

    return 0;
}
