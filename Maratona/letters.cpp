#include <bits/stdc++.h>

#define ll long long
#define endl "\n"

using namespace std;

int main() {

    ll n, m, room;
    cin >> n >> m;

    vector <ll> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (i > 0) {
            a[i] += a[i - 1];  
        }
    }

    while(m--) {
        ll b;
        cin >> b;
        ll dorm = lower_bound(a.begin(), a.end(), b) - a.begin();
        if (dorm > 0)
            room = b - a[dorm - 1];
        else
            room = b;
        cout << dorm + 1 << " " << room << endl; 
    }
    return 0;
}