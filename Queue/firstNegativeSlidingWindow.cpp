// This is a program to find the first negative integer in every 
// window of size k in an array using a sliding window approach.
// The time complexity of this program is O(n).
// Eg. Input: A[] = {-8, 2, 3, -6, 10}, k = 2
//     Output: -8 2 -6 -6

#include<bits/stdc++.h>
using namespace std;

vector<int> FirstNegative(int A[], int n, int k){
    deque<int>dq;
    vector<int>ans;

    for(int i=0;i<k;i++){
        if(A[i]<0){
            dq.push_back(i);
        }
    }
    if(dq.size()>0){
        ans.push_back(A[dq.front()]);
    }else{
        ans.push_back(0);
    }

    for(int i=k;i<n;i++){
        if(!dq.empty() && i-dq.front()>=k){
            dq.pop_front();
        }

        if(A[i]<0){
            dq.push_back(i);
        }

        if(dq.size()>0){
            ans.push_back(A[dq.front()]);
        }else{
            ans.push_back(0);
        }
    }
    return ans;
}

int main(){
    int A[] = {-8, 2, 3, -6, 10};
    int n = sizeof(A) / sizeof(A[0]);
    int k = 2;

    vector<int> ans = FirstNegative(A, n, k);

    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
    cout << endl;
    return 0;
}