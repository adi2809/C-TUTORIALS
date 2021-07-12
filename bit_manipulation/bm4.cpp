#include <iostream>
using namespace std;


int updatebit(int n, int pos, int val){

    int mask = ~(1<<pos);
    n = n & mask;


    return n| (val<<pos);
}

int main(){

    int n, pos,val;
    cin>>n>>pos>>val;

    cout<<n<<endl;

    n = updatebit(n,pos,val);

    cout<<n;
    return 0;
}