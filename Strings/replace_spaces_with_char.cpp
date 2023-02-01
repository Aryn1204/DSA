#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    string temp="";
    cout<<"Enter the string: "<<endl;
    getline(cin,s);
    for (int i = 0; i < s.length(); i++){
        if(s[i]!=' ')
            temp+=s[i];
        else
            temp+="@40";
    }
    cout<<"The new string is: "<<temp;  
    return 0;
}