#include <iostream>

using namespace std;

int main() {

    char op;
    double v1, v2;

    cin >> op;

    cin >> v1 >> v2;

    cout.precision(2);
    cout.setf(ios::fixed);

    if (op != 'M' and op != 'D') {
        cout << "Operacao invalida.\n";
        return -1;
    }

    if (op == 'M') 
        cout << v1 * v2;
    else 
        cout << v1 / v2;

    return 0;
}