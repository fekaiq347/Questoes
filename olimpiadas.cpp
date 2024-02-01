#include <iostream>
#include <algorithm>

using namespace std;

struct pais {
    int ouro, prata, bronze, id;
};

bool func (pais a, pais b) {
    if (a.ouro != b.ouro) 
        return a.ouro > b.ouro;
    if (a.prata != b.prata)
        return a.prata > b.prata;
    if (a.bronze != b.bronze)
        return a.bronze > b.bronze;

    return a.id < b.id;
}

int main() {

    int N, M, o, p, b;

    cin >> N >> M;

    if (N < 1 or N > 100) {
        cout << "Valor invalido para N" << endl;
        return -1;
    }

    if (M < 1 or M > 100) {
        cout << "Valor invalido para M" << endl;
        return -1;
    }

    pais v[N];

    for (int i = 0; i < N; i++) {
        v[i].ouro = 0;
        v[i].prata = 0;
        v[i].bronze = 0;
        v[i].id = i + 1;
    }

    for (int i = 0; i < M; i++) {
        cin >> o >> p >> b;
        v[o - 1].ouro++;
        v[p - 1].prata++;
        v[b - 1].bronze++;
    }

    sort(v, v + N, func);

    for (int i = 0; i < N; i++) 
        cout << v[i].id << " ";

    cout << endl;
    
    return 0;
}