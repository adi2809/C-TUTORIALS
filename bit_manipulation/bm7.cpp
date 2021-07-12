#include <iostream>
#include <algorithm>
using namespace std; 

// generate all possible subsets. 

void printSubsets(int arr[], int n){
    
    for (int i=0; i<(1<<n); i++)
    {
        for(int j=0; j<n; j++)
        {
            if(i & (1<<j)){
                cout<<arr[j]<<" ";
            }
        }
        cout<<endl;
    }


    return;
}

int main(){

    int n; 
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    printSubsets(arr, n);

    return 0;
}