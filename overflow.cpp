#include <iostream>

using namespace std;

int main() {

    double N, P, Q, res;
    char op;

    cin >> N;

    cin >> P >> op >> Q;

    if (N < 1 or N > 500000) {
        cout << "Valor invalido para N.\n";
        return -1;
    } else if (P < 0 or P > 1000) {
        cout << "Valor invalido para P.\n";
        return -1;
    } else if (Q < 0 or Q > 1000) {
        cout << "Valor invalido para Q.\n";
        return -1;
    }

    if (op == '+')
        res = P + Q;
    else if (op == '*')
        res = P * Q;

    if (res > N)
        cout << "OVERFLOW";
    else if (res <= N)
        cout << "OK";


    return 0;
}