#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,l;
    cout<<"Enter the size of arrays and the kth element to be searched: "<<endl;
    cin>>n>>m>>l;
    int a[n],b[m],c[n+m];
    cout<<"Enter the sorted array: "<<endl;
    for (int i = 0; i < n; i++)
        cin>>a[i];
    cout<<"Enter the sorted array: "<<endl;
    for (int i = 0; i < m; i++)
        cin>>b[i];
    int i=0,j=0,k=0;
    while (k<(n+m)){
        if(a[i]<b[j]){
            c[k]=a[i];
            k++;
            i++;
        }
        else if(a[i]>b[j]){
            c[k]=b[j];
            k++;
            j++;
        }
        else{
            c[k]=a[i];
            k++;
            i++;
            j++;
        }
    }
    cout<<"The kth element of the array is: "<<c[l-1];
    return 0;
}