#include<bits/stdc++.h>
using namespace std;

int power(int n, int p){
    if(p==0){
        return 1;
    }
    int ans = n*power(n,p-1);
    return ans;
}

int main(){
    int n,p;
    cout<<"Enter the number : ";
    cin>>n;
    cout<<"Enter the power : ";
    cin>>p;
    int ans = power(n,p);
    cout<<"Power of "<<n<<" raised to "<<p<<" is : "<<ans;
    return 0;
}