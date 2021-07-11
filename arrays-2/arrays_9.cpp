#include <iostream>
#include <algorithm>

using namespace std; 

//searching a key in a 2D array.

int main(){

    int m, n;
    cin>>m>>n;

    int a[m][n];
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin>>a[i][j];
        }
    }

    int key; 
    cin>>key; 

    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            if(a[i][j]==key){
                cout<<i<<" "<<j; 
            }
        }
        cout<<endl;
    }

    return 0;
}