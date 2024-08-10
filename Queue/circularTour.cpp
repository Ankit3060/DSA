// This is a program to find the first petrol pump from where a truck 
// will be able to complete the circle without running out of petrol.
// The time complexity of this program is O(n).
// Eg. Input: petrol[] = {4, 6, 7, 4}, distance[] = {6, 5, 3, 5}
// PD = {(4, 6), (6, 5), (7, 3), (4, 5)}
//     Output: 2 starting from index 2

#include <bits/stdc++.h>
using namespace std;

struct petrolPump {
    int petrol;
    int distance;
};

class Solution {
public:
    int Tour(petrolPump p[], int n) {
        int balance = 0;
        int deficit = 0;
        int start = 0;

        for (int i = 0; i < n; i++) {
            balance += p[i].petrol - p[i].distance;

            if (balance < 0) {
                deficit += balance;
                start = i + 1;
                balance = 0;
            }
        }

        if(deficit+balance>=0){
            return start;
        }else{
            return -1;
        }
    }
};

int main() {
    int n;
    cout << "Enter the number of petrol pumps: ";
    cin >> n;

    petrolPump p[n];
    cout << "Enter petrol and distance for each petrol pump:\n";
    for (int i = 0; i < n; i++) {
        cin >> p[i].petrol >> p[i].distance;
    }

    Solution sol;
    int startIndex = sol.Tour(p, n);

    if (startIndex != -1) {
        cout << "The starting petrol pump index is: " << startIndex << endl;
    } else {
        cout << "No solution exists" << endl;
    }

    return 0;
}
