#include<bits/stdc++.h>
using namespace std;
int main(){
    int m,n;
    cout<<"Enter the number of rows and columns: "<<endl;
    cin>>m>>n;
    int a[m][n];
    cout<<"Enter the matrix elements: "<<endl;
    for (int i = 0; i < m; i++)
        for(int j=0;j < n; j++) 
            cin>>a[i][j];
    int i=0,j=0;
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++){
            if(j==n-1){
                swap(a[i][0],a[i][n-1]);
            }
        }
    cout<<"The new matrix is: "<<endl;
     for (int i = 0; i < m; i++)
        for(int j=0;j < n; j++) 
            cout<<a[i][j]<<" ";
    return 0;
}