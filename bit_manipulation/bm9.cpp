#include <iostream>
#include <algorithm>
using namespace std;
// find two unqiue numbers in an array except them all occur twice.

int setBit(int n, int pos){

    return (n&(1<<pos))!=0;
}
int solve(int arr[], int n){
    
    int xorsum ;

    for(int i=0; i<n; i++)
    {
        xorsum=xorsum^arr[i];
    }
    int tempxor = xorsum;
    int setbit = 0;
    int pos = 0; 
    while(setbit!=1){

        setbit = xorsum & 1;
        pos++;

        xorsum  = xorsum>>1;
    }    
    int newXor=0;
    for(int i=0; i<n; i++){
        if(setBit(arr[i], pos-1)){
            newXor = newXor^arr[i];
        }
    }

    cout<<newXor<<" "<<(tempxor ^ newXor);
    return 0;
}

int main(){
    int n; 
    cin>>n;

    int a[n];
    for (int i=0; i<n; i++)
    {
        cin>>a[i];
    }

    solve(a, n);

    return 0;
}