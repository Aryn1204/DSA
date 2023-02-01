#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,key,flag=0;
    cin>>n>>key;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    int i=0,j=1,currDiff=0;
    while(j<n){
        currDiff=a[j]-a[i];
        if(currDiff==key){
            cout<<"Yes";
            flag=1;
            break;
        }
        else if(currDiff>key){
            i++;
        }
        else{
            j++;
        }
    }
    if(flag==0)
        cout<<"No";
    return 0;
}