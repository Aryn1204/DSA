#include<bits/stdc++.h>
using namespace std;
int main(){ 
    int row,col;
    cout<<"Enter the size of the matrix: "<<endl;
    cin>>row>>col;
    int a[row][col];
    cout<<"Enter the array elements: "<<endl;
    for(int i=0;i<row;i++)
        for(int j=0;j<col;j++)
            cin>>a[i][j];
    for (int i = 0; i < col; i++){
        if(i%2==0){
            for (int j = 0; j < row; j++){
                cout<<a[j][i]<<" ";
            }
            cout<<endl;
        }
        else{
            for (int j = row-1; j >= 0; j--){
                cout<<a[j][i]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}