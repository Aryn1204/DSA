#include<bits/stdc++.h>
using namespace std;
int main(){
    int flag=0;
    int f1[26]={0};
    int f2[26]={0};
    string s1,s2;
    cout<<"Enter the first string"<<endl;
    cin>>s1;
    cout<<"Enter the sub-string"<<endl;
    cin>>s2;
    for(int i=0;i<s1.length();i++)
        f1[s1[i]-97]++;
    for(int i=0;i<s2.length();i++)
        f2[s2[i]-97]++;
    for (int i = 0; i < 26; i++){
     if(!(f2[i]<=f1[i])){
        break;
        flag=1;
     }
    }
    if(flag==0)
        cout<<"Valid substring"<<endl;
    else
    cout<<"Not valid substring"<<endl;
    return 0;
}