#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n){
    if(n<=1) return false;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0) return false;
    }
    return true;
}

int primeMethod1(int n){
    if(n==0 || n==1) return 0;
    int count = 0;
    for(int i=2; i<=n; i++){
        if(isPrime(i)){
            count++;
        }
    }
    return count;
}

int primeMethod2(int n){
    if(n==0) return 0;
    vector<bool>prime(n,true);
    prime[0]=prime[1]=false;
    int ans = 0;
    for(int i=2;i<n;i++){
        if(prime[i]){
            ans++;
            int j=2*i;
            while(j<n){
                prime[j] = false;
                j+=i;
            }
        }
    }
    return ans;
}

// TC = O(nlog(logn))
vector<bool>primeMethod3(int n){
    vector<bool>sieve(n,true);
    sieve[0]=sieve[1]=false;
    
    for(int i=2;i<sqrt(n);i++){
        if(sieve[i]==true){
            int j=i*i;
            while(j<n){
                sieve[j] = false;
                j+=i;
            }
        }
    }
    return sieve;
}

int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    int ans = primeMethod1(n);
    cout<<ans<<endl;

    int ans2 = primeMethod2(n); //Seive of Eratosthenes
    cout<<ans2<<endl;

    vector<bool> ans3 = primeMethod3(n); //sieve of Eratosthenes optimze way
    int count = 0;
    for(int i=0; i<ans3.size(); i++){
        if(ans3[i]){
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}