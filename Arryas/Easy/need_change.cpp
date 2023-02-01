#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of array elements: "<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter the array elements: "<<endl;
    for (int i = 0; i < n; i++)
        cin>>a[i];
    for(int i=0;i<n-2;i++){
        int temp=a[i];
        a[i]=a[i+2];
        a[i+2]=temp;
    }
    cout<<"The new array is:"<<endl;
    for (int i = 0; i < n; i++)
        cout<<a[i]<<" ";
    
    return 0;
}