#include <iostream>
using namespace std; 

// if else demo :  

int main(){

    int savings; 
    cin>>savings; 

    if (savings > 5000){
        if (savings > 10000){
            cout<<'road trip';
        }else{
            cout<<'fancy restraunt';
        }
    }else if (savings > 1000){
        cout<<"burger king!!";
    }else{
        cout<<"cry !!!!";
    }
    return 0;
}