// Valid parenthesis problem
// eg. "{{}}, {}{},{{}{}}" = > it is valid
//  "{{{{}}" => it is not valid
// "{{{{}}" => min cost to make valid is 1

#include <bits/stdc++.h>
using namespace std;

int findMinCost(string expression) {
    stack<char> s;
    for (int i = 0; i < expression.length(); i++) {
        char ch = expression[i];
        // If opening parenthesis then push
        if (ch == '{') {
            s.push(ch);
        } else {
            // If closing parenthesis and stack is not empty and top is '{', then pop
            if (!s.empty() && s.top() == '{') {
                s.pop();
            } else {
                s.push(ch);
            }
        }
    }

    // Stack contains invalid expressions
    int a = 0; // Count of '}'
    int b = 0; // Count of '{'
    while (!s.empty()) {
        if (s.top() == '{') {
            b++;
        } else {
            a++;
        }
        s.pop();
    }

    int ans = (a+1)/2 + (b+1)/2;
    return ans;
}

int main() {
    vector<string> expressions = {"{{}}", "{}{}", "{{}{}}", "{{{{}}"};

    for (const string &expression : expressions) {
        int result = findMinCost(expression);
        cout << "Minimum cost to make \"" << expression << "\" valid is: " << result << endl;
    }

    return 0;
}
