#include <iostream>
#include <algorithm>
using namespace std;

// max till i : 

void maxTillI(int n, int arr[]){

    int mx = INT_MIN; 
    int Mx[n]; 

    for (int i=0; i<n; i++){

        mx = max(mx, arr[i]);
        Mx[i] = mx;
    }

    for (int i=0; i<n; i++){
        cout<<Mx[i]<<endl;
    }
    return; 
}

void allSubarraySums(int n, int arr[]){

    for (int i=0; i<n; i++){
        int sum = 0; 
        for(int j=i; j<n; j++){
            sum=arr[j]+sum;
            cout<<sum<<endl; 
        }
        
    }


    return;
}

void longestArithmeticSubArray(int n, int arr[]){
    int pd, curr, ans;
    ans=2; pd = arr[1]-arr[0]; curr=2;
    int j = 2; 
    
    while(j<n){
        if(pd==arr[j]-arr[j-1]){
            curr++;
        }else{
            pd = arr[j]-arr[j-1];
            curr = 2;
        }

        ans = max(ans, curr);


        j++;
    }

    cout<<ans<<endl; 
    return;
}

int main(){

    int t; 
    cin>>t; 

    while(t--){
        int N; 
        cin>>N; 

        int arr[N]; 
        for (int i = 0; i<N; i++){
            cin>>arr[i];
        }
        longestArithmeticSubArray(N, arr);
    }

    return 0;
}