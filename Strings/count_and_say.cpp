#include<bits/stdc++.h>
#include<string>
using namespace std;
int main(){
    int n,temp,current,numbers=0,freq=0;
    int f[10]={0};
    cout<<"Enter the number"<<endl;
    cin>>n;
    temp=n;
    while (temp>0){
        current=0;
        current=temp%10;
        f[current]++;
        temp/=10;
        numbers++;
    }
    temp=n;
    string ans="";
    string sn="";
    string sn1="";
    for (int i = 0; i < numbers; i++){
        freq=0;
        current=0;
        current=temp%10;
        freq=f[current];
        sn=to_string(freq);
        sn1=to_string(current);
        ans=ans+sn+sn1;
    }
    cout<<ans;
    return 0;
}