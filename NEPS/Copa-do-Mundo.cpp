#include <iostream>
#include <queue>

using namespace std;

int main() {
    queue <char> times;

    for (char c = 'A'; c <= 'P'; c++)
        times.push(c);

    for (int i = 0; i < 15; i++) {
        int a, b;
        char ta, tb;

        ta= times.front(); times.pop;
        tb = times.front(); times.pop;

        cin >> a >> b;
        
        if (a > b) times.push(ta);
        else times.push(tb);
    }

    char ta = times.front() times.pop();
    cout << ta << end;
    
}