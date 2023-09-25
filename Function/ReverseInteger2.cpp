// This is most optimize way to solve it is leetcode solution
#include <iostream>
#include<cmath>
#include <limits.h>
using namespace std;

int reverse(int x) {
        int rev=0;
        int remainder;
        bool isNeg=false;
        if(x<=INT_MIN)
        {
            return 0;
        }
        if(x<0)
        {
            isNeg = true;
            x = -x;
        }
        while(x !=0)
        {
            if(rev>INT_MAX/10)
            {
                return 0;
            }
            remainder = x%10;
            rev = rev*10 + remainder;
            x=x/10;
        }
    return isNeg ? -rev : rev;
}

int main() {
    int x;
    cout<<"Enter the value :"<<endl;
    cin>>x;
    int answer= reverse(x);
    cout<<answer<<endl;
    return 0;
}