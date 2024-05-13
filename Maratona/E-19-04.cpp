#include <bits/stdc++.h>

using namespace std;

int main () {

    int h, w;

    cin >> h >> w;

    int m[h][w];

    for (int i = 0; i < h; i++) {
        cout << endl;
        for (int j = 0; j < w; j++) {

            cin >> m[i][j]; 

            if (m[i][j] == 0) {
                cout << ".";
            } else {
                char c = m[i][j] + 65 - 1;
                cout << c;
            }

        }
    }

    return 0;
}