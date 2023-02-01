#include<bits/stdc++.h>
using namespace std;
int minimum(int *a,int s,int e){
    if(s<e){
        int mid=s+(e-s)/2;
        if(a[mid]<a[mid-1] && a[mid]<a[mid+1])
            return mid;
        if(a[mid]>a[s]){
            return minimum(a,mid+1,e);
        }
        if(a[mid]<a[e]){
            return minimum(a,s,mid-1);
        }
    }
    else
        return -1;
}
int main(){
    int n;
    cout<<"Enter the number of array elements: "<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter the array elements: "<<endl;
    for (int i = 0; i < n; i++)
        cin>>a[i];
    int ans=minimum(a,0,n-1)+1;
    cout<<"The position of minimum element is: "<<ans;
    return 0;
}