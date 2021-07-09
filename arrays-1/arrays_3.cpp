#include <iostream>
#include <math.h>
using namespace std; 

// selection sort in an array :

void selectionSort(int n, int arr[]){
    for (int i=0; i<n-1;i++){
        for (int j=i+1; j<n;j++){
            if (arr[j] < arr[i]){
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }

    return;
}

// bubble sort in an array :

void bubbleSort(int n, int arr[]){
    int counter = 1; 

    while (counter < n){
        for (int i=0; i<n-counter; i++){
            if (arr[i]>arr[i+1]){
                int temp =arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
        }
        counter++;
    }
    return; 
}

void insertionSort(int n, int arr[]){

    for (int i = 1; i<n; i++){

        int curr = arr[i];
        int j = i-1;

        while (arr[j]>curr && j>=0){
            arr[j+1]=arr[j];
            j--; 
        }
        arr[j+1]=curr;
    }

    return;
}

int main(){

    int n; 
    cin>>n; 

    int arr[n];
    for (int i=0; i<n; i++){
        cin>>arr[i];
    }

    selectionSort(n, arr);

    for (int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    int brr[n];
    for (int i=0; i<n; i++){
        cin>>brr[i];
    }

    bubbleSort(n, brr);

    for (int i=0; i<n; i++){
        cout<<brr[i]<<" ";
    }

    return 0;
}