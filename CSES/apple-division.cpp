#include <bits/stdc++.h>
#define ll long long
#define endl "\n"

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);

    ll t, n;
    cin >> n;
    ll ans = LLONG_MAX;

    vector<ll>p(n);

    ll tot = 0;
    for (int i = 0; i < n; i++) {
        cin >> p[i];
        tot += p[i];
    }

    for (int i = 0; i < 1 << n; i++) {
        ll s = 0;
        for (ll j = 0; j < n; j++) {
            if (i & 1 << j) s+= p[j];
        }
        ll curr = abs((tot - s) - s);
        ans = min(ans, curr);
    }
    cout << ans << endl;

    return 0;
}