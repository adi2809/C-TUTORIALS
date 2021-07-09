#include <iostream>
using namespace std; 

// print the sum of prime numbers in the range [L, R] inclusive.
int main(){
    int L, R; 
    cin>>L>>R;

    int s = 0;

    for(int i = L ; i<=R; i++)
    {
        int num = i;
        bool is_prime = true; 

        for(int j = 2; j < num; j++)
        {
            if (num%j==0){
                is_prime = false;
                break;
            }
        
        if (is_prime==true){
            s+=num;
            }
        }
    }
    cout<<s;
    return 0;
}