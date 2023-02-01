#include<bits/stdc++.h>
using namespace std;
int binary(int *a,int s,int e,int x){
    if (s>e)
        return -1;
    else{
        int mid=s+(e-s)/2;
        if(a[mid]==x)
            return mid;
        if(a[mid]>a[s]){
            if(x>=a[s] && x<=a[mid])
                return binary(a,s,mid-1,x);
            else
                return binary(a,mid+1,e,x);
        }
        if(a[mid]<a[e]){
            if(x>=a[mid] && x<=a[e])
                return binary(a,mid+1,e,x);
            else
                return binary(a,s,mid-1,x);
        }
    }
}
int main(){
    int n,x;
    cout<<"Enter the array elements and element to be searched: "<<endl;
    cin>>n>>x;
    int a[n];
    cout<<"Enter the array elements: "<<endl;
    for (int i = 0; i < n; i++)
        cin>>a[i];
    int ans=binary(a,0,n-1,x);
    cout<<"The element is present at: "<<ans;
    return 0;
}