#include <iostream>
#include <vector>
using namespace std;

// this is normal approach
// int findMissingNumber(vector<int>& arr){
//     int sum=0;
//     int n=arr.size();
//     int actualSum = n * (n+1)/2;
//     for(int i=0;i<arr.size();i++){
//         sum+=arr[i];
//     }
//     return abs(actualSum - sum);
// }

// This is binary search approach
int findMissingNumber(vector<int>& arr) {
    int start = 0;
    int end = arr.size() - 1;

    while (start <= end) {
        int mid = start + (end - start) / 2;

        // Check if the difference between the element at mid and its index
        // is equal to the difference between the first element and its index.
        if (arr[mid] - mid == arr[0]) {
            // If they are equal, the missing element lies in the right half.
            start = mid + 1;
        } else {
            // If they are not equal, the missing element lies in the left half.
            end = mid - 1;
        }
    }

    // At this point, start will be pointing to the index where the missing number should be.
    return arr[0] + start;
}

int main() {
    vector<int> arr = {1, 2, 3, 5, 6, 7, 8};
    int missingNumber = findMissingNumber(arr);
    cout << "Missing number is: " << missingNumber << endl;
    return 0;
}
