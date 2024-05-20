#include <bits/stdc++.h>
#define ll long long
#define endl "\n"

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);

    string s;
    cin >> s;

    ll xCount = 0, oCount = 0;

    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'X') {
            xCount++;
        } else if (s[i] == 'O') {
            oCount++;
        }
    }

    if (oCount > xCount || xCount > oCount + 1) {
        cout << "?" << endl;
        return 0;
    } else {
        if (s[0] == s[1]) {
            cout << (s[0] == 'X' ? "Alice\n" : "Bob\n");
        } else if (s[1] == s[2]) {
            cout << (s[1] == 'X' ? "Alice\n" : "Bob\n");
        } else {
            cout << "*" << endl;
        }
    }
    return 0;
}