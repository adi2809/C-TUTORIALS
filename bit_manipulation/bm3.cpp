//clear bit.

#include <iostream>
using namespace std;

int clearbit(int n, int pos){

    return ((n & (~(1<<pos))));
}

int main(){

    int n, pos;
    cin>>n>>pos;

    cout<<n<<endl;

    n = clearbit(n,pos);

    cout<<n;
    return 0;
}