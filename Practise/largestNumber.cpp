#include<bits/stdc++.h>
using namespace std;
bool cmpr(int a , int b){
    return to_string(a)+to_string(b)>to_string(b)+to_string(a);
}
int main(){
    vector<int> v = {3,30,34,5,9};
    sort(v.begin(),v.end(),cmpr);
    string ans ="";
    for(int i=0;i<v.size();i++){
        ans += to_string(v[i]);
    }
    if(ans[0]=='0'){
        cout<<"0";
    }
    else{
        cout<<ans;
    }
    return 0;
}