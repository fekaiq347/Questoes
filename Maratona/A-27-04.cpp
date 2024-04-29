#include <bits/stdc++.h>

using namespace std;

int main() {

    int n;
    string encrypted, decrypted;

    cin >> n >> encrypted;

    for (int i = ; i < n;) {

        if (encrypted.substr(i, 2) == "ab") {
            encrypted += '0';
            i += 2;
        } else if (i + 2 < n && encrypted.substr(i, 3) == "aba") {
            decrypted += '1';
            i += 3;
        } else {
            cout << "Senha criptografada invalida.\n";
            return 0;
        }

    }

    cout << decrypted << endl;

    return 0;
}