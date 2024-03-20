#include <iostream>
#include <math.h>

using namespace std;

int main() {
    
    int N;

    cin >> N;

    if (N < 2 or N > pow(10, 9)) {
        cout << "Valor inválido.\n";
        return -1;
    }
    
    for (int cont = 1; cont <= N; cont++) {
        if (N % cont == 0 ) {
            cout << cont << " ";
        }
    }
    
    return 0;
}