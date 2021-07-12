//find the unique number present in an array of the triplets of same numbers and an unique number.
#include <iostream>
using namespace std;

bool getBit(int n, int pos){

    return ((n & (1<<pos))!=0);
}

int setBit(int n, int pos){

    return (n|(1<<pos));
}   
int solve(int arr[], int n){
    int result = 0;

    for(int i=0; i<64; i++){
        int sum=0;
        for(int j=0; j<n; j++){
            if(getBit(arr[j], i)){
                sum++;
            }
        }
        if(sum%3!=0){
            result = setBit(result, i);
        }
    
    }
    cout<<result;
    return 0;
}

int main(){
    int n; 
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    solve(arr, n);
    return 0;
}