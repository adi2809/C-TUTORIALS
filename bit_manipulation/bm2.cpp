#include <iostream>
using namespace std;
//set bit.
int setbit(int n, int pos){

  n =  ((n | (1<<pos)));
  return n;
}
int main(){

    int n, pos;
    cin>>n>>pos;

    cout<<n<<endl;

    n = setbit(n,pos);

    cout<<n;
    return 0;
}