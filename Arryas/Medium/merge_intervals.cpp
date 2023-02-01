#include<bits/stdc++.h>
using namespace std;
int main(){
    int col,flag=0;
    cout<<"Enter the column number: "<<endl;
    cin>>col;
    int a[2][col];
    cout<<"Enter the intervals: "<<endl;
    for(int i=0;i<col;i++)
        for(int j=0;j<2;j++)
            cin>>a[j][i];
    int i=0;
    int j=1;
    while (j<col){
        if(a[1][i]>=a[0][j]){
            a[1][i]=a[1][i+1];
            a[0][j]=a[0][j+1];
            a[1][j]=a[1][j+1];
            flag++;
            if(j==col-1){
                break;
            }
        }
        else{
            i++;
            j++;
        }
    }
    cout<<"The merged intervals are: "<<endl;
    for(int i=0;i<=col;i++)
        for(int j=0;j<2;j++){
            cout<<a[j][i]<<" ";
        }
    return 0;
}