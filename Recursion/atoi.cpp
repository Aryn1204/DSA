#include<bits/stdc++.h>
using namespace std;
void reversal(string n,int i,int j){
    if(i>j)
        return;
    swap(n[i++],n[j--]);
    reversal(n,i,j);
}
string trim(string s){
    string n="";
    for(int i=0;i<s.length();i++){
        if((s[i]>='0' && s[i]<='9') || s[i]=='-')
            n+=s[i];
    }
    return n;
}
int main() {
    string s,n;
    cout<<"Enter the number in string"<<endl;
    cin>>s;
    n = trim(s);
    reversal(n,0,n.length()-1);
    cout<<n<<endl;
    // int ans=0;
    // for(int i=0;i<n.length();i++){
    //     int curr=n[i]-'0';
    //     ans+=pow(10,i)*curr;
    // }
    // cout<<"The integer value is "<<ans<<endl;
    // return 0;
}