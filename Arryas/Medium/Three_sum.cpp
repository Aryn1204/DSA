#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,flg=0;
    cout<<"Enter the number of integers: "<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter the array elements: "<<endl;
    for (int i = 0; i < n; i++)
        cin>>a[i];
    sort(a,a+n);
    if(a[0]>0){
        cout<<"Not possible"<<endl;
    }
    for(int i=0;i<n;i++){
        int val=-0-a[i];
        int j=i+1;
        int k=j+1;
        while(k<n && j>i){
            if(a[j]+a[k]==val){
                cout<<"Yes";
                flg=1;
                break;
            }
            else if(a[j]+a[k]>val){
                k--;
            }
            else{
                j++;
            }
        }
        if(flg==1)
            break;
    }
    return 0;
}