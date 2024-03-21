//incompleto.
#include <iostream>
#include <cmath>

using namespace std;

int main() {

    long long t, x, y, numero;

    cin >> t;

    for (int i = 0; i < t; i++) {
        cin >> y >> x;

        if (y > x) {
            if ((y & 1) == 0) {
                numero = pow(y, 2) - x + 1;
                cout << numero;
            }
            else { 
                numero = pow(y - 1, 2) + 1 + (x - 1);
                cout << numero;
            }
        }
        else { 
            if ((x & 1) == 1) {
                numero = pow(x, 2) - y + 1;
                cout << numero;
            }
            else {
                numero = (pow(x - 1, 2) + 1) + y - 1; 
                cout << numero;
            }
        }

    }

    cout << endl;

    return 0;
}