#include <iostream>
using namespace std;
//parallelogram pattern
int main(){

    int n;
    cin>>n;

    for (int row=1; row<=n; row++){
        int spaces = n-row;
        for (int col=0; col<spaces; col++){
            cout<<" ";
        }
        for (int col=0; col<n;col++){
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}