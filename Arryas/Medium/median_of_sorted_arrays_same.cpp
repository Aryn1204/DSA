#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,count=0;
    cout<<"Enter the number of array elements: ";
    cin>>n;
    int a[n],b[n];
    int c[2*n];
    cout<<"Enter the array elements: "<<endl;
    for(int i=0;i<n;i++)
        cin>>a[i];
    cout<<"Enter the array elements: "<<endl;
    for(int i=0;i<n;i++)
        cin>>b[i];
    int i=0,j=0,k=0;
    while (i<=n && j<=n){
        if(a[i]>b[j]){
            c[k]=b[j];
            j++;
            k++;
        }
        else if(a[i]<b[j]){
            c[k]=a[i];
            i++;
            k++;
        }
        else{
            c[k]=a[i];
            k++;
            i++;
            j++;
            count++;
        }
    }
    int median;
    if((2*n-count)%2==0){
        median=(c[(2*n-count)/2]+c[((2*n-count)+1)/2])/2;
    }
    else{
        median=c[(2*n-count)/2];
    }
    cout<<"The median is: "<<median<<endl;
    return 0;
}