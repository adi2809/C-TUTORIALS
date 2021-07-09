#include <iostream>
using namespace std;

// hollow rectangle

int main(){
    int m, n;
    cin>>m>>n;

    for (int i = 0; i<m;i++){
        if (i==0 || i == m-1){
            for(int j = 0; j<n; j++){
                cout<<"*";
            } 
            
        }else{
            for(int j = 0; j<n; j++){
                if (j==0 || j==n-1){
                    cout<<"*";
                }else{
                    cout<<" ";
                }
            
            }
        }
        cout<<endl;
        
    }




    return 0;
}