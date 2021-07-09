#include <iostream>
using namespace std;
//number traingle;

int main(){

    int n;
    cin>>n;

    for (int row=1; row<=n; row++){
        int spaces = n-row;
        for (int col=0; col<spaces; col++){
            cout<<"  ";
        }
        for (int col=row; col>=1;col--){
            cout<<col<<" ";
        }
        for (int col=2; col<=row;col++){
            cout<<col<<" ";
        }
        cout<<endl;
    }

    return 0;
}