#include <iostream>
#include <climits>
#include <algorithm>


using namespace std; 
// pair sum problem. 

//brute force: 
bool pairsum(int arr[], int n, int k){

    for(int i=0; i<n; i++){
        for (int j=i+1; j<n; j++){
            if(arr[i]+arr[j]==k){

                cout<<i<<" "<<j<<endl;
                return true;
            }
        }
    }

    return false;

}

//optimal approach: (but we need an sorted array);

bool pairSumNew(int arr[], int n, int k){

    int l, r; 
    l=0; r=n-1;

    while(l<r){
        int s = arr[l]+arr[r];

        if(s<k){
            l++;
        }else if(s==k){
            return true;
        }else{
            r--;
        }
    }

    return false;
}
int main(){
    int n, k; 
    cin>>n>>k; 

    int a[n]; 
    for (int i=0; i<n; i++){
        cin>>a[i];
    }

    cout<<pairSumNew(a, n, k);

    return 0;
}