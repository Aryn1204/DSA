#include<bits/stdc++.h>
using namespace std;
int main(){
    string s1,s2;
    int flag=0;
    cout<<"Enter both the strings: "<<endl;
    cin>>s1;
    cin>>s2;
    int j=0;
    for(int i=0;i<s2.length();i++)
        if(s2[i]==s1[0]){
            j=i;
            break;
        }
    int i=0;
    while(i<s1.length()){
        if(s1[i]==s2[j]){
            if(j==(s2.length()-1)){
                i++;
                j=0;
            }
            else{
            i++;
            j++;
            }
        }
        else{
            cout<<"N0";
            flag=1;
            break;
        }
    }
    if(flag==0)
        cout<<"YES";
    return 0;
}