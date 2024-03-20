#include <iostream>
#include <vector>

using namespace std;

int main() {

    long long n;

    cin >> n;

    string str1 = "";

    if (n <= 3 and n > 1) {
        cout << "NO SOLUTION";
        return 0;
    }
    
    for (int i = 1; i <= n; i++) {
        if ((i & 1) == 0)
            cout << i << " ";
        else 
            str1 += to_string(i) + " ";
    }

    cout << str1;

    return 0;
}