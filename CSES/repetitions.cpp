#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {

    string dna;
    int qtd = 1, maior = 1;

    cin >> dna;
    int tam = dna.size();

    for (int i = 1; i <= tam; i++) {
        if (dna[i] == dna[i - 1]) {
            qtd++;
            if (qtd > maior) maior = qtd;
        }
        else
            qtd = 1;
    }

    cout << maior;

    return 0;
}