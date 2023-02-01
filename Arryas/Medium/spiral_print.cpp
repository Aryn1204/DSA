#include<bits/stdc++.h>
using namespace std;
int main(){ 
    int row,col;
    vector <int> ans;
    cout<<"Enter the size of the matrix: "<<endl;
    cin>>row>>col;
    int a[row][col];
    cout<<"Enter the array elements: "<<endl;
    for(int i=0;i<row;i++)
        for(int j=0;j<col;j++)
            cin>>a[i][j];
    int count=0;
    int total=row*col;
    int startRow=0;
    int startCol=0;
    int endRow=row-1;
    int endCol=col-1;
    while (count < total){

     //print starting row
     for (int i = startCol;(count<total) && (i < endCol); i++){
        ans.push_back(a[startRow][i]);
        count++;
     }
     startRow++;

     //print ending column
     for (int i = startRow;(count<total) && (i < endRow); i++){
        ans.push_back(a[i][endCol]);
        count++;
     }
     endCol--;

     //print ending row
     for (int i = endCol-1;(count<total) && (i >= startCol); i--){
        ans.push_back(a[endRow][i]);
        count++;
     }
     endRow--;

     //print starting column
     for (int i = endRow-1;(count<total) && (i >= startRow); i--){
        ans.push_back(a[i][startCol]);
        count++;
     }
     startCol++;
    }
    for(auto i=ans.begin();i!=ans.end();i++){
        cout<<(*i)<<" ";
    }
    return 0;
}