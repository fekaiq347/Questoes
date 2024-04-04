#include <iostream>
#include <cmath>
 
#define MOD 1000000007
 
using namespace std;
 
int main() {
 
    long long n, result = 1;
 
    cin >> n;
 
    while (n--) {
        result = result * 2;
        result = result % MOD;
    }
 
    
    cout << result;
 
    return 0;
}