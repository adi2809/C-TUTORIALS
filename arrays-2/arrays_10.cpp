#include <iostream>
//spiral order print.
using namespace std; 

int main(){

    int m, n; 
    cin>>m>>n;

    int a[m][n];
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin>>a[i][j];
        }
    }

    int rowStart, rowEnd, colStart, colEnd;
    rowStart=0; colStart=0; rowEnd=m-1; colEnd=n-1;

    while(rowStart<=rowEnd && colStart<=colEnd)
    {
        // for row_start
        for(int col=colStart; col<=colEnd; col++){
            cout<<a[rowStart][col]<<" ";
        }
        rowStart++;

        //for col_end
        for(int row=rowStart; row<=rowEnd; row++){
            cout<<a[row][colEnd]<<" ";
        }
        colEnd--;

        for(int col=colEnd; col>=colStart; col--){
            cout<<a[rowEnd][col]<<" ";
        }
        rowEnd--; 

        for(int row=rowEnd; row>=rowStart; row--){
            cout<<a[row][colStart]<<" ";
        }
        colStart++;

    }

    return 0;
}