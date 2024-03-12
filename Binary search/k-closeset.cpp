// K closest problem means we have to find the k closest elements to a given number x.
// This is two pointer approach problem.

#include <bits/stdc++.h>
using namespace std;

vector<int> kClosests(vector<int>&arr,int k,int x){
    int l = 0;
    int h = arr.size() - 1;
    while (h - l >= k) {
        if (x - arr[l] > arr[h] - x) {
            l++;
        } else {
            h--;
        }
    }

    // vector<int> ans;
    // for (int i = l; i <= h; i++) {
    //     ans.push_back(arr[i]);
    // }
    // return ans;

    // It can also be written as:
    return vector<int>(arr.begin() + l, arr.begin() + h + 1);
}

int main() {
    vector<int> arr = {12,26,22,30,35,39,42,45,48,50,53,55,56};
    int k = 4;
    int x = 35;
    vector<int> ans = kClosests(arr, k, x);
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " "<<endl;
    }
    return 0;
}