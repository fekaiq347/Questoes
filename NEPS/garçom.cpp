#include <iostream>

using namespace std;

int main() {

    int N, L, C, cont, total;

    cin >> N;

    if (N < 1 or N > 100) {
        cout << "Valor inválido para N.\n";
    }

    cont = 0;
    total = 0;
    
    while (cont != N) {
        cin >> L >> C;

        if (L < 0 or L > 100) {
            cout << "Valor inválido para L.\n";
        } 
        
        if (C < 0 or C > 100) {
            cout<< "Valor inválido para C.\n";
        }

        if (L > C) {
            total = total + C;
        }

        cont++;
    }

    cout << total;
    
    return 0;
}