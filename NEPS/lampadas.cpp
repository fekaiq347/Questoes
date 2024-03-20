#include <iostream>
#include <math.h>

using namespace std;

int main() {

    int N, I;
    int A = 0;
    int B = 0;

    cin >> N;

    if (N < 2 or N > pow(10, 5)){
        cout << "Número inválido\n";
        return -1;
    }

    for (int cont = 0; cont < N; cont++) {

        cin >> I;

        if (I == 1) {
            if (A == 1) {
                A = 0;
            } else if (A == 0) {
                A = 1;
            }
        }

        if (I == 2) {
            if (A == 1) {
                A = 0;
            } else if (A == 0) {
                A = 1;
            }

            if (B == 1) {
                B = 0;
            } else if (B == 0) {
                B = 1;
            }
        }
    }

    cout << A << "\n" << B;

    return 0;
}