#include <iostream>

using namespace std;

int main() {

    long long t, y, x, diag;

    cin >> t;

    if (t < 1 or t > 100000) {
        return -1;
    }

    if (y < 1 or x < 1 or y > 100000 or x > 100000) {
        return -1;
    }


    while (t--) {

        cin >> y >> x;

        if (y > x) {
            diag = (y * y) - (y - 1);

            if ((y & 1) == 0) {
                cout << diag + (x - 1) << endl;
            } else {
                cout << diag - (x - 1) << endl;
            }
        
        } else if (x == y) {
            cout << (y * y) - (y - 1);
        } else {
            diag = (x * x) - (x - 1);
        
            if ((x & 1) == 0) {
                cout << diag - (y - 1) << endl;        
            } else {
                cout << diag + (y - 1) << endl;
            }
        }

    }







    return 0;
}