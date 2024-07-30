// This code is to find the minimum element from the stack
// It has T.C = O(1) , S.C = O(1)

#include <bits/stdc++.h>
using namespace std;

class SpecialStack {
private:
    stack<int> s;
    int mini = INT_MAX;

public:
    void push(int data) {
        if (s.empty()) {
            s.push(data);
            mini = data;
        } else {
            if (data < mini) {
                int val = 2 * data - mini;
                s.push(val);
                mini = data;
            } else {
                s.push(data);
            }
        }
    }

    int pop() {
        if (s.empty()) {
            return -1;
        }
        int curr = s.top();
        s.pop();
        if (curr > mini) {
            return curr;
        } else {
            int prevVal = mini;
            int val = 2 * mini - curr;
            mini = val;
            return prevVal;
        }
    }

    int top() {
        if (s.empty()) {
            return -1;
        }
        int curr = s.top();
        if (curr < mini) {
            return mini;
        } else {
            return curr;
        }
    }

    int getMin() {
        if (s.empty()) {
            return -1;
        }
        return mini;
    }
};

int main() {
    SpecialStack s;

    s.push(10);
    s.push(20);
    s.push(5);
    s.push(15);

    cout << "Top element: " << s.top() << endl;    // Output should be 15
    cout << "Minimum element: " << s.getMin() << endl; // Output should be 5

    cout << "Popped element: " << s.pop() << endl;  // Output should be 15
    cout << "Top element: " << s.top() << endl;    // Output should be 5
    cout << "Minimum element: " << s.getMin() << endl; // Output should be 5

    s.push(2);

    cout << "Top element: " << s.top() << endl;    // Output should be 2
    cout << "Minimum element: " << s.getMin() << endl; // Output should be 2

    return 0;
}
