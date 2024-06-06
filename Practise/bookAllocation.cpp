#include<bits/stdc++.h>
using namespace std;

bool isSol(int A[],int N, int M, int sol){
    int pageSum = 0;
    int conter = 1;
    for(int i=0;i<N;i++){
        if(A[i]>sol){
            return false;
        }
        else if(pageSum+A[i]>sol){
            conter++;
            pageSum = A[i];
            if(conter>M){
                return false;
            }
        }
        else{
            pageSum += A[i];
        }
    }
    return true;

}

int possibleSol(int A[],int N,int M){
    int start=0;
    int end = accumulate(A,A+N,0);
    int ans = -1;
    if(M>N) return -1;
    while(start <= end){
        int mid = start + (end - start)/2;
        if(isSol(A,N,M,mid)){
            ans = mid;
            end = mid-1;
        }
        else{
            start = mid+1;
        }
    }
    return ans;
}
int main(){
    int A[] = {12, 34, 67, 90};
    int N = 4;
    int M = 2;
    cout<<possibleSol(A,N,M);
    return 0;
}