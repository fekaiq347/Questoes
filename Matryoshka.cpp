#include <algorithm>
#include <iostream>
#include <cmath>

using namespace std;

int main() {

    int N, assist, cont = 0;

    cin >> N;

    int altura[N], referencia[N];

    for (int i = 0; i < N; i++) {

        cin >> altura[i];

        if (altura[i] < 1 or N > pow(10, 5)) {
            cout << "Valor invalido para o elemento.\n";
            return -1;
        }
    
        referencia[i] = altura[i];
    }

    sort(altura, altura + N);


    for (int i = 0; i < N; i++) {
        if (referencia[i] != altura[i]) 
            cont++;
    }

    cout << cont << endl;

    for (int i = 0; i < N; i++) {
        if (referencia[i] != altura[i]) {
            cout << altura[i] << " ";
        }
    }
    
    return 0;
}