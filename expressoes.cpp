#include <iostream>
#include <stack>

using namespace std;

int main() {

    int t;
    string line;

    cin >> t;

    if (t < 1 or t > 20) {
        cout << "Valor invalido para t.\n";
        return -1;
    }

    while(t--) {
        cin >> line;

        stack <char> exp;
        bool cond = true;

        for (char c : line) {
            if (c == '{' or c == '[' or c == '(') {
                exp.push(c);
            } else {
                if (exp.size() > 0 and exp.top() == '{' and c == '}')
                    exp.pop();
                else if (exp.size() > 0 and exp.top() == '[' and c == ']')
                    exp.pop();
                else if (exp.size() > 0 and exp.top() == '(' and c == ')')
                    exp.pop();
                else {
                    cond = false;
                    break;
                }
            }
        }

        if (exp.size() > 0) 
            cond = false;

        cout << (cond ? "S\n" : "N\n");
    }
    
    return 0;
}