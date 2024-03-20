#include <iostream>
#include <math.h>

using namespace std;

int main() {

    double N, A;
    double total = 0;

    cin >> N;

    if (N < 0 or N > pow(10, 3)) {
        cout << "Valor inválido.\n";
        return -1;
    }

    int cont = 0;
    int tempo = 1;

    while (cont < N) {
        cin >> A;

        if (A < 0 or A > pow(A, 6)) {
            cout << "Valor inválido\n";
            return -1;
        }

        total += A;
        
        if (total < pow(10, 6)) {
            tempo++;
        }

        cont++;
    }

    if (total < pow(10, 6)) {
        cout << "Inválido\n";
        return -1;
    }

    cout << tempo;

    return 0;
}