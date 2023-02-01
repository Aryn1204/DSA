#include<bits/stdc++.h>
using namespace std;
int zeroNum(int *a,int s,int e){
    if(s>e)
        return -1;
    else{
        int mid=s+(e-s)/2;
        if(( mid==0 || a[mid-1]==1) && a[mid]==0)
            return mid;
        if(a[mid]==1)
            return zeroNum(a,mid+1,e);
        else
            return zeroNum(a,s,mid-1);
    }
}
int main(){
    int n;
    cout<<"Enter the number of array elements: "<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter the array elements: "<<endl;
    for (int i = 0; i < n; i++)
        cin>>a[i];
    int ans=n-zeroNum(a,0,n-1);
    cout<<"The number of zeros are: "<<ans;
    return 0;
}