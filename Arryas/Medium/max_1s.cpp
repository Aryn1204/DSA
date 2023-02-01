#include<bits/stdc++.h>
using namespace std;
int main(){
    int row,col,count=0,max=0;
    cin>>row>>col;
    int a[row][col];
    for(int i=0;i<row;i++)
        for(int j=0;j<col;j++)
            cin>>a[i][j];
    int currRow=0;
    int currCol=col-1;
    while(currRow<row && currCol>=0){
        int element=a[currRow][currCol];
        if(element==0){
            count=currCol+1;
            currRow++;
        }
        else{
            currCol--;
        }
        if(count>max){
            max=count;
        }
    }
    cout<<"The max zeros are: "<<max;
    return 0;
}