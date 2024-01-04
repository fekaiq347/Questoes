#include <iostream>

using namespace std;

int main() {

    int A, M;

    cin >> A >> M;
    
    if (A < 1 or A > 50 or M < 1 or M > 50) {
        cout << "Número de alunos ou monitores inválido.\n";
    }

    if ( A + M <= 50) {
        cout << "S";
    } else {
        cout << "N";
    }







    return 0;
}