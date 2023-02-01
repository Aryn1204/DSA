#include<bits/stdc++.h>
using namespace std;
char toLowerCase(char ch){
    if(ch>='a' && ch <='z')
        return ch;
    else
        return (ch-'A'+'a');
}
bool isValid(char ch){
    if((ch>='a'&& ch<='z')||(ch>='A'&& ch<='Z')||(ch>='0'&& ch<='9'))
        return 1;
    else 
        return 0;
}
bool isPalindrome(string str,int n){
    int s=0;
    int e=n-1;
    while (s<e){
    if(toLowerCase(str[s])==toLowerCase(str[e])){
        s++;
        e--;
    }
    else
        return false;
    }
}
int main(){
    string name;
    cout<<"Enter the string: "<<endl;
    cin>>name;
    string temp="";
    for (int j = 0; j < name.length(); j++){
        if(isValid(name[j])){
            temp.push_back(name[j]);
        }
    }    
    bool pal=isPalindrome(temp,temp.length());
    if(pal)
        cout<<"Valid Palindrome"<<endl;
    else
        cout<<"Not valid palindrome"<<endl;
    return 0;
}