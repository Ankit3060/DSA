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