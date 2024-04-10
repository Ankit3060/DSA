#include<bits/stdc++.h>
using namespace std;

void counting(int n){
    if(n == 0){
        return;
    }
    counting(n-1);
    cout<<n<<endl;
}

int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    cout<<"Counting from "<<n<<" is : "<<endl;
    counting(n);
    return 0;
}