// In this problem we are given a list of 24-hour clock time points in "HH:MM" format. Return the minimum minutes difference between 
// any two time-points in the list.
// Example: Input: timePoints = ["23:59","00:00"] -> Output: 1
#include<bits/stdc++.h>
using namespace std;

int minTimeDiff(vector<string>& s){
    vector<int>minutes;
    for(int i=0;i<s.size();i++){
        string curr = s[i];

        int hr = stoi(curr.substr(0,2));
        int min = stoi(curr.substr(3,2));
        int total = hr*60+min;
        minutes.push_back(total);
    }
    sort(minutes.begin(),minutes.end());
    int minDiff = INT_MAX;
    int n=minutes.size();
    for(int i=0;i<n;i++){
        int diff = (minutes[i+1])-minutes[i];
        minDiff = min(minDiff,diff);
    }
    int corner = (minutes[0]+1440)-minutes[n-1];
    minDiff = min(minDiff,corner);
    return minDiff;
}

int main(){
    vector<string>s={"23:59","00:00"};
    cout<<minTimeDiff(s)<<endl;
    return 0;
}