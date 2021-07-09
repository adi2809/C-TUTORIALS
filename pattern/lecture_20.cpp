#include <iostream>
using namespace std;
//binary pyramid pattern
int main(){

    int n;
    cin>>n;

    for (int row=1; row<=n; row++){
        for (int col=1; col<=row; col++){
            if ((row+col)%2 == 0){
                cout<<0<<" ";
            }else{
                cout<<1<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}