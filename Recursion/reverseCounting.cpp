#include<bits/stdc++.h>
using namespace std;

void counting(int n){
    //Base condition means kab rukna hai
    if(n==0)
    return;
    
    //Processing
    cout<<n<<endl;

    //Recursion call
    counting(n-1);
}

int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    counting(n);
    // cout<<"Counting from "<<n<<" is : "<<counting(n)<<endl;
    return 0;
}