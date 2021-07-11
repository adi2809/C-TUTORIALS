#include <iostream>
#include <climits>
#include <algorithm>
// maximum circular subarray sum problem.

using namespace std; 
int kadane(int n, int a[]){

    int curr = 0; 
    int maxs = INT_MIN;
    for(int i=0; i<n; i++){
        curr+=a[i];
        if (curr<0){
            curr=0;
        }
        maxs=max(maxs, curr);
    }

    return maxs;

}

int main(){
    int n; 
    cin>>n; 

    int a[n];
    for (int i=0; i<n; i++){
        cin>>a[i];
    }

    int wsum, nwsum; 

    nwsum = kadane(n, a);

    int totalSum = 0;

    for(int i = 0; i<n; i++){
        totalSum+=a[i];
        a[i] = -a[i];
    }

    wsum = totalSum+kadane(n, a);

    cout<<max(wsum, nwsum)<<endl;

    return 0;
}