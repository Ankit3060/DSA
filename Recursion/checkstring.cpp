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

int main(){
    string str = "Ankit Kumar";
    int n= str.length();
    int i=0;
    char key = 'k';
    bool ans = check(str,n,i,key);
    cout<<"Answer is : "<<ans<<endl;

    int ans2 = checkIndex(str,n,i,key);
    cout<<"Index of "<<key<<" is : "<<ans2;
    return 0;
}