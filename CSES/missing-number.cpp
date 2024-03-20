#include <iostream>

using namespace std;

int main() {

    int n, v1 = 0, v2 = 0;

    cin >> n;

    if (n < 2 or n > 200000)
        return -1;

    int v[n - 1]; 

    for (int i = 0; i <= n; i++) {
        if (i < n - 1) {
            cin >> v[i];
            v2 += v[i];
        }
        v1 += i;
    }
    
    cout << v1 - v2;

    return 0;
}