#include<bits/stdc++.h>
using namespace std;

bool cmp(char a, char b){
    return a>b;
}

bool cmpr(int a, int b){
    return a>b;
}

int main(){
    cout<<"For string"<<endl;
    string s;
    cin>>s;
    sort(s.begin(),s.end(),cmp);
    cout<<s<<endl;

    cout<<"For integer"<<endl;
    vector<int> v{3,30,34,5,9};
    sort(v.begin(),v.end(),cmpr);
    for(int i=0;i<v.size();i++){
        cout<<v[i];
    }
    return 0;
}


// Leet code solution (179)
// bool cmpr(int first,int second){
//     return to_string(first) + to_string(second)>to_string(second) + to_string(first);
// }
// class Solution {
// public:
//     string largestNumber(vector<int>& nums) {
//         sort(nums.begin(),nums.end(),cmpr);
//         string ans ="";
//         for(int i=0;i<nums.size();i++){
//             ans += to_string(nums[i]); 
//         }
//         return ans;
//     }
// };