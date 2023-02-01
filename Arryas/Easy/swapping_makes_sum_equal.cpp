#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,sum1=0,sum2=0;
    cout<<"Enter the sizes of both the arrays: "<<endl;
    cin>>n>>m;
    int a[n];
    int b[m];
    cout<<"Enter the array elements: "<<endl;
    for (int i = 0; i < n; i++){
        cin>>a[i];
        sum1+=a[i];
    }
    cout<<"Enter the array elements: "<<endl;
    for (int i = 0; i < m; i++){
        cin>>b[i];
        sum2+=b[i];
    }
    sort(a,a+n);
    sort(b,b+m);
    int i=0,j=0;
    while (j<n){
        if(sum1-a[i]+b[j]==sum2-b[j]+a[i]){
            cout<<"Yes "<<a[i]<<" "<<b[j];
            break;}
        else if(sum1-a[i]+b[j]>sum2-b[j]+a[i]){
            i++;
        }
        else
            j++;
    }
    

}