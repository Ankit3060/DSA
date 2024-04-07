#include<bits/stdc++.h>
using namespace std;

void solve(int arr[]){
    cout<<"size of array in function: "<<sizeof(arr)<<endl;
}

int main(){
    int arr[10] = {1,2,3,4,5};
    cout<<"size of array in main: "<<sizeof(arr)<<endl;
    solve(arr);
    return 0;
}