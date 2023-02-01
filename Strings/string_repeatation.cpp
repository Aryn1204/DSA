#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of the string"<<endl;
    cin>>n;
    char s[n];
    int a[26]={0};
    cout<<"Enter the string elements: "<<endl;
    for(int i=0;i<n;i++)
        cin>>s[i];
    for(int i=0;i<n;i++){
        int index=s[i]-97;
        a[index]++;
    }
    for(int i= 0;i<26;i++){
        if(a[i]>1){
            char ch=i+97;
            cout<<ch<<" "<<a[i]<<endl;
        }
    }
    return 0;
}