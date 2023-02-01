#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cout<<"Enter the string"<<endl;
    cin>>s;
    string ans="";
    string max="";
    int maxlen=0;
    for (int i = 0; i < s.length()-1; i++){
        int temp=i;
        int temp2=0;
        for (int j = i+1; j <= (i*2)+1; j++){
            if(s[temp]==s[j]){
                 temp--;
                 max+=s[j];
            }
            else{
                temp2=j;
                break;
            }
        }
        if(max.length()>maxlen){
            maxlen=max.length();
            ans=max;
            max="";
        }
    }
    cout<<max;
    return 0;
}