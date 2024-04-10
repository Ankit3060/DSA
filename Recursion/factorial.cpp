#include<bits/stdc++.h>
using namespace std;

int factorial(int n){
    //This is base condition means rukna kab hai
    if(n==1)
    return 1;
    //This is recursion call
    int ans = n*factorial(n-1);
    return ans;
}
int main(){
    int n;
    cout<<"Enter the value : ";
    cin>>n;
    int ans = factorial(n);
    cout<<"Factorial of "<<n<<" is : "<<ans;
    return 0;
}