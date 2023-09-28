// here we are adding the all the term till n if n=5 then 5+4+3+2+1=15
#include <iostream>
using namespace std;

int getSum(int n){
    int sum=0;
    for(int i=0;i<=n;i++)
    {
        sum+=i;
    }
    return sum;
}

int main() {
    int n;
    cout<<"Enter the value :"<<endl;
    cin>>n;
    int answer= getSum(n);
    cout<<"Sum of the "<<n<<" is :"<<answer;
    cout<<endl;
    return 0;
}