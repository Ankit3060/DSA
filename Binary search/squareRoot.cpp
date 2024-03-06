// Square root of a number with precision
//eg. n=10, precision=3 => 3.162

#include <bits/stdc++.h>
using namespace std;

int squareRoot(int n){
    int s=0;
    int e=n;
    int target = n;
    int ans = -1;
    while(s<=e){
        int mid = s+(e-s)/2;
        if(mid*mid==target){
            return mid;
        }
        else if(mid*mid>target){
            e=mid-1;
        }
        else{
            ans=mid;
            s=mid+1;
        }
        mid = s+(e-s)/2;
    }
    return ans;
}

int main() {
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int ans = squareRoot(n);
    int precision;
    cout<<"Enter the precision: ";
    cin>>precision;
    double step=0.1;
    double fans = ans;
    for(int i=0;i<precision;i++){
        for(double j=fans;j*j<=n;j+=step){
            fans=j;
        }
        step /= 10;
    }
    cout<<"Ans is :"<<fans<<endl;
    return 0;
}