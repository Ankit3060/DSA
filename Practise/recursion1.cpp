#include <iostream>
using namespace std;

int facto(int n){
    if(n==1)
        return 1;
    return n*facto(n-1);
}

void counting(int n){
    if(n==0)
        return;
    counting(n-1);
    cout<<n;
}

int fibb(int n){
    if(n==1)
        return 0;
    if(n==2)
        return 1;
    int ans;
    ans = fibb(n-1)+fibb(n-2);
    return ans;
}

int sumFib(int n){
    int sum=0;
    for(int i=1;i<=n;i++){
        sum += fibb(i);
    }
    return sum;
}

int powe(int n, int p){
    if(p==0)
        return 1;
    return n*powe(n,p-1);
}

int climb(int n){
    if(n==0)
        return 1;
    if(n==1)
        return 1;
    return climb(n-1)+climb(n-2);
}

void printArray(int arr[],int n, int i){
    if(i>=n)
        return;
    cout<<arr[i]<<" ";
    printArray(arr,n,i+1);
}

int main()
{
    // int n = 7;
    // int ans = facto(n);
    // cout<<ans;
    
    // counting(n);
    // cout<<ans;
    
    // cout<<"Current Value of "<<n<<" is : ";
    // int ans = fibb(n);
    // cout<<ans<<endl;
    // cout<<"Sum of all the fibbonaci is ";
    // int answ = sumFib(n);
    // cout<<answ;
    
    // int n=2;
    // int p=3;
    // int ans = powe(n,p);
    // cout<<ans;
    
    // int n = 4;
    // int ans = climb(n);
    // cout<<ans;
    
    int arr[] = {5,6,4,7,8};
    int n = sizeof(arr)/sizeof(arr[0]);
    int i=0;
    printArray(arr,n,i);
    

    return 0;
}