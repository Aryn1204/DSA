#include<bits/stdc++.h>
using namespace std;
int main(){
    int row,col;
    cout<<"Enter the number of rows and columns: "<<endl;
    cin>>row>>col;
    int a[row][col];
    cout<<"Enter the elements: "<<endl;
    for (int i = 0; i < row; i++)
        for (int j = 0; j < col; j++)
            cin>>a[i][j];    
    cout<<"The column wise sum is: "<<endl;
     int sum=0;
    for(int i=0;i<row;i++){
        sum=0;
        for(int j=0;j<col;j++){
            sum+=a[j][i];
        }
        cout<<sum<<" ";
    }
    return 0;
}