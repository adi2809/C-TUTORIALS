#include <iostream>
#include <algorithm>

using namespace std; 

//find subarray with given sum. 

int main(){
    int n, k; 
    cin>>n>>k;

    int a[n];
    for (int i=0; i<n; i++){
        cin>>a[i];
    }

    int i, j, l, r, sum; 
    i=0; j=0; l=-1; r=-1; sum=0;

    while(j<n && sum+a[j]<=k){
        sum += a[j];
        j++; 
    }

    if(sum == k){
        cout<< i+1 <<" "<< j <<endl;
        return 0;
    }

    while (j<n){
        sum+=a[j];
        while (sum>k){
            sum-=a[i];
            i++;
        }
        if (sum == k){
            l = i+1;
            r = j+1;
            break;
        }
        j++;
    }

    cout<<l<< " "<<r<<endl;

    return 0;
}