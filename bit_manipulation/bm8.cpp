// find the unique number in an array in which only one number is present
// once and rest are present twice.

#include <iostream>
using namespace std;

int unique(int arr[], int n){

    int xorsum=0;

    for(int i=0; i<n; i++)
    {
        xorsum=xorsum^arr[i];
        cout<<xorsum<<" ";
    }
    cout<<endl;
    return xorsum;
}
int main(){

    int n; 
    cin>>n;

    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }

    cout<<unique(a, n);

}