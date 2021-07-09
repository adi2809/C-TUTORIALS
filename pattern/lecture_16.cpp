#include <iostream>
using namespace std;
// pyramid using numbers;
int main(){

    int n; 
    cin>>n;
    for (int i=1; i<=n; i++){
        for(int j=0; j<i; j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }


    return 0;

}