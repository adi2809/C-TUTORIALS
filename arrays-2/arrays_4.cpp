#include <iostream>
#include <algorithm>
#include <climits>

using namespace std; 

void print(int n, int a[]){
    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            for(int k=i; k<=j; k++){
                cout<<a[k]<<" ";
            }
            cout<<endl;
        }
    }


    return; 
}

int main(){
    int n; 
    cin>>n; 

    int a[n];
    for (int i=0; i<n; i++){
        cin>>a[i];
    }

    print(n, a);
}