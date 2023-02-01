#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int count[26]={0};
    for(int i=0;i<s.length();i++){
        int index=s[i]-'a';
        if(count[index]==0){
            count[index]++;
        }
        else{
            s[i]='\0';
        }
    }
    cout<<s;
    return 0;
}