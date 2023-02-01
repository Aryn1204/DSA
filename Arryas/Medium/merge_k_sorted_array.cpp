#include<bits/stdc++.h>
using namespace std;
int main(){
    int k,n;
    cout<<"Enter the size of matrix: "<<endl;
    cin>>k;
    n=k*k;
    int a[k][k];
    int arr[n];
    cout<<"Enter the sorted arrays: "<<endl;
    for (int i = 0; i < k; i++)
        for (int j = 0; j < k; j++)
            cin>>a[i][j];
    for (int i = 0; i < k; i++)
        for (int j = 0; j < k; j++)
            arr[k*i+j]=a[i][j];
    sort(arr,arr+n);
    cout<<"The mergerd array list is: "<<endl;
    for (int i = 0; i < n; i++)
        cout<<arr[i]<<" ";
    return 0;
}