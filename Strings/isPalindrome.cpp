#include<bits/stdc++.h>
using namespace std;
char toLowerCase(char ch){
    if(ch>='a' && ch <='z')
        return ch;
    else
        return (ch-'A'+'a');
}
void reverse(char* str,int n){
    int s=0;
    int e=n-1;
    while (s<e){
        swap(str[s++],str[e--]);
    }   
}
int lengthString(char* s){
    int count=0;
    for (int i = 0; s[i]!='\0'; i++)
        count++;
    return count;    
}
bool isPalindrome(char* str,int n){
    int s=0;
    int e=n-1;
    while (s<e){
        if(toLowerCase(str[s])==toLowerCase(str[e])){
            s++;
            e--;       
        }
        else{
            return false;
        }
    }
    return true;
}
int main(){
    char s[20];
    string name;
    cout<<"Enter the string and name: "<<endl;
    cin>>s>>name;
    int n=lengthString(s);
    bool pal=isPalindrome(s,n);
    if(pal)
        cout<<"It is palindrome"<<endl;
    else
        cout<<"Not palindrome"<<endl;
        cout<<"The name is "<<name<<" and its length is : "<<name.length();
    return 0;
}