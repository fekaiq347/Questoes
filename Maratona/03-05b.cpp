#include <bits/stdc++.h>

using namespace std;

int main() {

    int n;

    cin >> n;

    vector <pair<int, int>> c;

    for (int i = 0; i < n; i++) {
        int start, end;
        cin >> start >> end;
        c.push_back({start, 1});
        c.push_back({end, -1});
    }

    sort(c.begin(), c.end());

    int actualCustomers = 0;
    int maxCustomers = 0;

    for (int i = 0; i < c.size(); i++) {
        actualCustomers += c[i].second;
        maxCustomers = max(maxCustomers, actualCustomers);
    }

    cout << maxCustomers << endl;

    return 0;

}