# include <iostream>
using namespace std; 

// check if a number is prime or composite and return the smallest divisor of the number.

int main(){

    int n, g; 
    cin>>n;
    for(int i=2; i<n; i++)
    {
        if (n%i==0){
            g = i;
            cout<<n;
            cout<<' ';
            cout<<i; 
            break;
        }
    }
    if (g<n){
        cout<<"composite";
    }else{
        cout<<"prime num";
    }



    return 0;
}