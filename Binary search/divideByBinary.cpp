// Divide two integers without using multiplication, division and mod operator.
// formula = quotient*divisor+remainder=dividend
// here we modified formula = mid*divisor=dividend

#include <bits/stdc++.h>
using namespace std;

int divideBinary(int dividend, int divisor) {
    if (divisor == 0) {
        // Handle division by zero
        cerr << "Error: Division by zero!" << endl;
        return INT_MAX; // Return some error value
    }

    long long s = 0; // Use long long to prevent overflow
    long long e = abs((long long)dividend); // Use long long for proper upper bound
    long long mid, ans = -1;

    while (s <= e) {
        mid = s + (e - s) / 2;

        if (abs(mid * divisor) == abs((long long)dividend)) {
            ans = mid;
            break;
        } else if (abs(mid * divisor) > abs((long long)dividend)) {
            e = mid - 1;
        } else {
            ans = mid;
            s = mid + 1;
        }
    }

    // Adjust sign based on the dividend and divisor
    if ((dividend < 0 && divisor > 0) || (dividend > 0 && divisor < 0)) {
        ans = -ans;
    }

    // Handle overflow
    if (ans > INT_MAX || ans < INT_MIN) {
        return INT_MAX; // Return some error value
    }

    return ans;
}

int main() {
    int dividend = 21;
    int divisor = 7;
    int ans = divideBinary(dividend, divisor);
    cout << "Ans is: " << ans << endl;
    return 0;
}
