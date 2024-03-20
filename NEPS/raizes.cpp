#include <iostream>
#include <cmath>

using namespace std;

int main() {

    int N;
    double X;

    cin >> N;

    if (N < 1 or N > pow(10, 4)) {
        cout << "Valor para N inválido.\n";
        return -1;
    }

    cout.precision(4);
    cout.setf(ios::fixed);

    for (int cont = 0; cont < N; cont++) {
        cin >> X;
        cout << sqrt(X) << endl;
    }

    return 0;
}