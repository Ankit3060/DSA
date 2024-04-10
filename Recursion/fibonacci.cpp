// Fibbonacci series using recursion
//Eg. 0 1 1 2 3 5 8 13 21 34 55 89 144 233 377 610

#include<bits/stdc++.h>
using namespace std;

int fib(int n){
    // if(n==0 || n==1)
    // return n;
    //Above line can also be written as
    if(n==1){
        return 0;
    }
    if(n==2){
        return 1;
    }
    
    int ans = fib(n-1) + fib(n-2);
    return ans;
}

int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    int ans = fib(n);
    cout<<"Fibonacci of "<<n<<" is : "<<ans;
    return 0;
}