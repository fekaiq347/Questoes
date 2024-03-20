#include <iostream>
#include <math.h>

using namespace std;

int main() {

    int N, A, consec = 0;

    int total = 1, ant;

    cin >> N;

    if (N < 1 or N > pow(10,4)) {
        cout << "Valor inválido.\n";
        return -1;
    }

    cin >> A;
    
    for (int cont = 0; cont < N - 1; cont++) {
        
        ant = A;
        cin >> A;
        
        if (A == ant) {
            total++;
            if (total > consec) {
                consec = total;
            } 
        } else {
            
            total = 1;
        }
    }

    cout << consec;
    
    return 0;
}