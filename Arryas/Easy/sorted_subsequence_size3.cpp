#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int low=INT_MAX,mid=INT_MAX,count=0;
    cout<<"Enter the number of elements: "<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter the array elements: "<<endl;
    for (int i = 0; i < n; i++)
        cin>>a[n];
    if(n<3)
        cout<<"Enter a bigger array"<<endl;
    for(int i=0;i<n;i++){
        if(a[i]>mid){
            count++;
            cout<<"True"<<endl;
            break;
        } 
        else if(a[i]>low && a[i]<mid)
            mid=a[i];
        else if(a[i]<low)
            low=a[i];
    } 
    if(count==0)
        cout<<"False"<<endl;
    return 0;
}