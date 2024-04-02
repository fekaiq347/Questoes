#include <iostream>
#include <vector>

using namespace std;

int main() {

    long long n;

    cin >> n;

    if (((n * (n + 1) / 2) & 1) != 0) 
        cout << "NO" << endl;
    else {
        cout << "YES" << endl;

    vector <long long> f;
    vector <long long> s;

    if ((n & 1) == 0) {
        for (int i = 0; i < n / 2; i++) {
            if ((i & 1) == 0) {
                f.push_back(i + 1);
                f.push_back(n - i);
            } else {
                s.push_back(i + 1);
                s.push_back(n - i);
            }
        }
    } else {
        for (int j = 0; j < (n - 1) / 2; j++) {
            if ((j & 1) == 0) {
                f.push_back(j + 1);
                f.push_back(n - 1 - j);
            } else {
                s.push_back(j + 1);
                s.push_back(n - 1 - j);
            }
        }

        if (f.size() > s.size())
            s.push_back(n);
        else 
            f.push_back(n);
    }

    cout << f.size() << endl;
    
    for (size_t i = 0; i < f.size(); i++)
        cout << f[i] << " ";

    cout << endl << s.size() << endl;

    for (size_t j = 0; j < s.size(); j++) 
        cout << s[j] << " ";
    
    }

    return 0;
}