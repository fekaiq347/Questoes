#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {

    double x, y, z;

    cin >> x;

    if (x < 0 or x > pow(10,4)) {
        cout << "Valor inválido para x.\n";
        return -1;
    }

    cin >> y;

    if (y < 1 or y > 10) {
        cout << "Valor inválido para y.\n";
        return -1;
    }

    z = pow(x, y);

    if (z > (pow(10, 9))) {
        cout << "Valor inválido para x elevado a y.\n";
        return -1;
    }

    cout.precision(4);
    cout.setf(ios::fixed);

    double retorno = z;

    cout << retorno;

    return 0;
}