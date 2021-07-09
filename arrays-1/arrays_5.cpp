#include <iostream>
#include <algorithm>

using namespace std; 

void solve(int n, int arr[]){
    

    if(n==1){
        cout<<1;
    }else{
        int numrdays = 0; int mx = INT_MIN;

        for(int i=0; i<n; i++){

            if (arr[i]>mx && arr[i]>arr[i+1]){
                numrdays++;
            }
            mx = max(mx, arr[i]);
        }


        cout<<numrdays<<endl;
    }

    
    return;
}
int main(){

    int t; 
    cin>>t; 

    while(t--){
        int n; 
        cin>>n; 
        int v[n+1];
        v[n] = -1; 
        for (int i=0; i<n; i++){
            cin>>v[i];
        }        

        solve(n, v);
    }
}