#include<bits/stdc++.h>
using namespace std;

bool check(string& str,int& n,int i, char& key){
    if(i>=n){
        return false;
    }
    
    if(str[i]==key){
        return true;
    }

    bool ans = check(str,n,i+1,key);
    return ans;
}

int checkIndex(string& str,int& n,int i, char& key){
    if(i>=n){
        return -1;
    }
    
    if(str[i]==key){
        return i;
    }

    int ans = checkIndex(str,n,i+1,key);
    return ans;
}

void checkInedxAll(string& str, int& n, int i, char& key, vector<int>& ans){
    if(i>=n)
    return;

    if(str[i]==key){
        ans.push_back(i);
    }
    return checkInedxAll(str,n,i+1,key,ans);
}

void checkIndexCount(string& str, int& n, int i, char& key, int& count){
    if(i>=n)
    return;

    if(str[i]==key){
        count++;
    }
    return checkIndexCount(str,n,i+1,key,count);
}

int main(){
    string str = "ankit kumar";
    int n= str.length();
    int i=0;
    char key = 'k';
    bool ans = check(str,n,i,key);
    cout<<"Answer is : "<<ans<<endl;

    int ans2 = checkIndex(str,n,i,key);
    cout<<"Index of "<<key<<" is : "<<ans2<<endl;

    vector<int> ans3;
    checkInedxAll(str,n,i,key,ans3);
    cout<<"Index of "<<key<<" is : ";
    for(auto i: ans3){
        cout<<i<<" ";
    }

    int count=0;
    checkIndexCount(str,n,i,key,count);
    cout<<"\nCount of "<<key<<" is : "<<count;
    return 0;
}