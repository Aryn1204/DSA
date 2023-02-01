#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,path1,path2,maxSum=0;
    cout<<"Enter the size of  arrays: "<<endl;
    cin>>n;
    int a[n],b[n];
    cout<<"Enter the sorted elements: "<<endl;
    for (int i = 0; i < n; i++)
        cin>>a[i];
    cout<<"Enter the sorted elements: "<<endl;
    for (int i = 0; i < n; i++)
        cin>>b[i];
    int i=0,j=0;
    path1=0,path2=0;
    while (i=n-1){
        if (a[i]>b[j]){
            path2+=b[j];
            j++;
        }
        else if(a[i]<b[j]){
            path1+=a[i];
            i++;
        }
        else{
            if(path1>path2){
                path1+=a[i];
                maxSum=path1;
                path1=0;
                path2=0;
                i++;
                j++;
            }
            if(path1<path2){
                path2+=b[j];
                maxSum=path2;
                path1=0;
                path2=0;
                i++;
                j++;
            }
        }
    }
    if(a[i]>a[j])
        maxSum+=a[i];
    else
        maxSum+=b[j];
    cout<<maxSum<<endl;
    
    return 0;
}