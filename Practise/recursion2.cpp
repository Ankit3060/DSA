#include <bits/stdc++.h>
using namespace std;

void miniEle(int arr[],int n,int &mini,int i){
    if(i>=n)
        return;
    mini = min(arr[i],mini);
    miniEle(arr,n,mini,i+1);
}

void maxiEle(int arr[],int n,int &maxi,int i){
    if(i>=n)
        return;
    maxi = max(arr[i],maxi);
    maxiEle(arr,n,maxi,i+1);
}

bool check(string &str, int &n,char &key,int i){
    if(i>=n)
        return false;
    if(str[i]==key)
        return true;
    return check(str,n,key,i+1);
}

int checkIndex(string &str, int &n, char &key, int i){
    if(i>=n)
        return -1;
    if(str[i]==key)
        return i;
    return checkIndex(str,n,key,i+1);
}

int checkAllIndexes(string& str, int& n,int i, char& key,  vector<int>& ans3){
    if(i>=n)
        return -1;
    if(str[i]==key){
        ans3.push_back(i);
    }
    return checkAllIndexes(str,n,i+1,key,ans3);
}

int countIndex(string &str, int &n, int i, char &key, int &count){
    if(i>=n)
        return -1;
    if(str[i]==key)
        count++;
    return countIndex(str,n,i+1,key,count);
}

void printDigit(int n){
    if(n==0)
        return;
    int digit = n%10;
    int newD = n/10;
    printDigit(newD);
    cout<<digit<<" ";
}

bool checkSorted(vector<int>& arr,int &n,int i){
    if(i==n-1)
        return true;
    if(arr[i+1]>arr[i])
        return true;
    return checkSorted(arr,n,i+1);
}

void printSubsequence(string str,string output, int i){
    if(i>=str.length()){
        cout<<output<<endl;
        return;
    }
    //Exclude
    printSubsequence(str,output,i+1);
    //include
    output += str[i];
    printSubsequence(str,output,i+1);
}

int main()
{
    // int arr[5]={5,7,8,6,3};
    // int n = sizeof(arr)/sizeof(arr[0]);
    // int i=0;
    // int mini = INT_MAX;
    // int maxi = INT_MIN;
    // miniEle(arr,n,mini,i);
    // cout<<mini<<endl;
    // maxiEle(arr,n,maxi,i);
    // cout<<maxi;
    
    // string str = "Ankit kumar";
    // int n = str.length();
    // char key = 'k';
    // int i =0;
    
    // bool ans = check(str,n,key,i);
    // cout<<ans<<endl;
    
    // int ans1 = checkIndex(str,n,key,i);
    // cout<<ans1<<endl;
    
    // vector<int>ans3;
    // int ans2 = checkAllIndexes(str,n,i,key,ans3);
    // for(auto i : ans3){
    //     cout<<i<<" ";
    // }
    // cout<<endl;
    
    // int count =0;
    // int ans4 = countIndex(str,n,i,key,count);
    // cout<<count<<endl;
    
    // int n=2048;
    // if(n==0){
    //     cout<<0<<endl;
    //     return 0;
    // }
    // printDigit(n);
    
    // vector<int>arr={1,2,3,4};
    // int n = arr.size();
    // int i=0;
    // bool ans = checkSorted(arr,n,i);
    // cout<<ans<<endl;
    
    string str = "abc";
    string output = "";
    int i =0;
    printSubsequence(str,output,i);
    
    return 0;
}