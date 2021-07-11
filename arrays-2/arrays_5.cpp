#include <iostream>
#include <algorithm>

using namespace std; 

void maxSubarraySum(int n, int a[]){
    
   int currSum[n+1];
   currSum[0]=0;
   for (int i = 1; i<=n; i++){
       currSum[i] = currSum[i-1]+a[i-1];
   }

   int maxSum = INT_MIN;
   
   for(int i = 1; i<=n; i++){
       int sum = 0;
       for (int j = 0; j<i; j++){
           sum = currSum[i]-currSum[j];
           maxSum=max(maxSum, sum);
       }
       
   }

    cout<<maxSum; 
    return; 
}

void maxSubarraySumNew(int n, int a[]){
    
    int currSum = 0 ;
    int maxSum = INT_MIN;

    for (int i = 0 ; i<n; i++){
        currSum+=a[i];
        if (currSum<0){
            currSum=0;
        }
        maxSum = max(maxSum, currSum);
    }
    cout<<maxSum<<endl; 
    return; 
}


int main(){

    int n; 
    cin>>n; 

    int a[n];
    for (int i=0; i<n; i++){
        cin>>a[i];
    }

    maxSubarraySumNew(n, a);
    return 0;
}