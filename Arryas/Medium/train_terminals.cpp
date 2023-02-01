#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of elements: "<<endl;
    cin>>n;
    int a[n];
    int d[n];
    cout<<"Enter the arrival times : "<<endl;
    for (int i = 0; i < n; i++)
        cin>>a[i];
    cout<<"Enter the departure times : "<<endl;
    for (int i = 0; i < n; i++)
        cin>>d[i];
    int stack[n];
    int t=0;
    stack[t]=d[0];
    int i=1;
    while (i<n){
       if(a[i]>stack[t]){
        stack[t]=d[i];
        i++;
       }
       else{
        stack[t]=d[i];
        t++;
        i++;
        if(stack[t]>d[i-1]){
            t--;
        }
       }
    }
    cout<<"The minimum number of platforms needed are: "<<(t+1)<<endl;
    return 0;
}