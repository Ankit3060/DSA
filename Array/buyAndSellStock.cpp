// To find the maximum profit that can be earned by buying and selling a stock
#include <bits/stdc++.h>
using namespace std;

int maxProfit(vector<int>& arr,int n){
    int buy= arr[0],max_profit=0;
    for(int i=1;i<n;i++)
    {
        if(buy>arr[i])
        {
            buy=arr[i];
        }
        else if(arr[i]-buy>max_profit)
        {
            max_profit=arr[i]-buy;
        }
    }
    return max_profit;
}

int main() {
    int n;
    cout<<"Enter the size of the array"<<endl;
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter the array"<<endl;
    for(int i=0;i<arr.size();i++)
    {
        cin>>arr[i];
    }
    int ans = maxProfit(arr,n);
    cout<<"The maximum profit is :" << ans << endl;
    return 0;
}