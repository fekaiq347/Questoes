//Não sei onde está errado, mas tá errado...

#include <iostream>
#include <string>

using namespace std;

int main() {

    string risada;
    string vogais = "";

    cin >> risada;

    for (int i = 0; i < risada.size(); i++) {
        if (risada[i] == 'a'){
            vogais += risada[i];
        }
        if (risada[i] == 'e') {
            vogais += risada[i];
        }
        if (risada[i] == 'i') {
            vogais += risada[i];
        }
        if (risada[i] == 'o') {
            vogais += risada[i];
        }
        if (risada[i] == 'u') {
            vogais += risada[i];
        }
    }

    int tamanho = 0;

    for (int i = 0; i < vogais.size(); i++) {
        tamanho++;
    }

    for (int i = 0; i < vogais.size(); i++) {
        for (int j = tamanho - 1; j >= 0; j--) {
            if (vogais[i] != vogais[j]) {
                cout << "N";
                return 0;
            }
        }
    }

    cout << "S";

    return 0;
}

