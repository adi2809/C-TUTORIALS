// binary search 
#include <iostream>
using namespace std;

int binary_search(int n, int key, int arr[]){
    int L, R; 
    L=0; R=n; 

    while (L<=R){
        int mid=(L+R)/2;

        if (arr[mid]==key){
            return mid;
        }
        else if (arr[mid]>key){
            R=mid-1; 
        }else{
            L=mid+1;
        }
    }
    return -1;
}

int main(){
    int n, k; 
    cin>>n>>k;

    int arr[n];

    for (int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<binary_search(n, k, arr);
    return 0;
}