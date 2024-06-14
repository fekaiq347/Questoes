#include <bits/stdc++.h>
#define ll long long
#define endl "\n"

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);

    ll n;
    cin >> n;

    vector <ll> v;

    for (ll i = 0; i < n; i++) {
        ll temp;
        cin >> temp;
        v.push_back(temp);
    }

    sort(v.begin(), v.end());

    ll pos = (n - 1) / 2;

    cout << v[pos];

    return 0;
}