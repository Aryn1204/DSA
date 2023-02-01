#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,max;
    cout<<"Enter the number of days: "<<endl;
    cin>>n;
    int a[n];
    int aux[n];
    cout<<"Enter the stock prices: "<<endl;
    for (int i = 0; i < n; i++)
        cin>>a[i];
    aux[n-1]=a[n-1];
    max=a[n-1];
    for (int i = n-2; i >= 0; i--){
        if(a[i]>max){
            max=a[i];
        }
        aux[i]=max;
    }
    int day=0;
    int buyday=0;
    int sellday=0;
    for (int i = 0; i < n; i++){
        if(aux[i]-a[i]>day){
            day=(aux[i]-a[i]);
            buyday=a[i];
            sellday=aux[i];
        }
    }
    cout<<"Price to be bought at: "<<buyday<<" and to be sold at: "<<sellday<<endl;
    return 0;
}