#include<bits/stdc++.h>
using namespace std;
int answer(vector<string>&s){
    vector<int> minute;
    for(int i=0;i<s.size();i++){
        string curr = s[i];
        int hr = stoi(curr.substr(0, 2));
        int min = stoi(curr.substr(3,2));
        int total = hr*60+min;
        minute.push_back(total);
    }
    sort(minute.begin(),minute.end());
    int minDiff = INT_MAX;
    int n = minute.size();
    for(int i=0;i<n-1;i++){
        int diff = (minute[i+1]) - minute[i];
        minDiff = min(minDiff,diff);
    }
    int corner = (minute[0]+1440)-minute[n-1];
    minDiff = min(minDiff,corner);
    return minDiff;
}
int main(){
    vector<string>s = {"23:59","22:00"};
    cout<<answer(s)<<endl;
    return 0;
}