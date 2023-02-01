#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,ma=1,mi=1,ans=1;
    cout<<"Enter the number of array elements: ";
    cin>>n;
    int a[n];
    cout<<"Enter the array elements: "<<endl;
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<n;i++){
        if(a[i]<0)
            swap(ma,mi);
        ma=max(a[i],a[i]*ma);
        mi=min(a[i],a[i]*mi);
        ans=max(ans,ma);
    }
    cout<<"The maximum product subarray is: "<<ans<<endl;
    return 0;
}