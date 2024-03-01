#include <iostream>

using namespace std;

int main() {

    long long n;

    cin >> n;

    if (n < 1 or n > 1000000)
        return -1;

    while(n != 1) {
        cout << n << " ";

        if (n & 1)
            n = (n * 3) + 1; 
        else 
            n = n >> 1;
           
    }

    cout << n;

    return 0;
}