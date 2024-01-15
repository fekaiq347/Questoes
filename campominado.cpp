#include <iostream>

using namespace std;

int main() {

    int N;

    cin >> N;

    if (N < 1 or N > 50) {
        cout << "Valor invalido para N.\n";
        return -1;
    }

    int campo[N];

    for (int cont = 0; cont < N; cont++) {
        cin >> campo[cont];
    }

    cout << endl;

    int total = 0;

    for (int cont = 0; cont < N; cont++) {
        total = campo[cont];

        if (cont < N - 1) {
            total += campo[cont + 1];
        }

        if (cont > 0) {
            total += campo[cont - 1];
        }

        cout << total << endl;
    }

    
    
    return 0;
}