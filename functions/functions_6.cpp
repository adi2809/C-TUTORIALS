//pascal's triangle:


#include <iostream>
using namespace std;

int fact(int n){
    if (n==0||n==1){
        return 1;
    }
    
    int prod = 1;

    for (int i = 2; i<=n; i++){
        prod= prod * i;
    }
    return prod;
}

void ncr(int n, int r){

    if (r>n){
        cout<<"error";
    }else{
        cout<<fact(n)/(fact(n-r)*fact(r));
    }
    
}

int main(){
    int n;
    cin>>n;

    for (int i = 0; i<n;i++){
        for (int j=0;j<=i;j++){
            ncr(i,j);
            cout<<" ";
        }
        cout<<endl;
    }
}