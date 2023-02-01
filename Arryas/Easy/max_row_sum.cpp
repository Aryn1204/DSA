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
    int sum=0,maxSum=0,val=0;
    for (int i = 0; i < row; i++){
        for (int j = 0; j < col; j++){
            sum+=a[i][j];   
        }
        if(sum>maxSum){
            maxSum=sum;
            val=i;
        }
        sum=0;
    }
    cout<<"The row with the max sum is: "<<val<<endl;
    return 0;
}