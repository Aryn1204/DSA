#include<bits/stdc++.h>
using namespace std;

void reversal(int* arr,int i,int j){
    if(i>j)
        return;
    swap(arr[i++],arr[j--]);
    reversal(arr,i,j);
}

int main(){
    int a[3]={1,2,3};
    reversal(a,0,2);
    for(int i=0;i<3;i++)
        cout<<a[i]<<" ";
    return 0;
}