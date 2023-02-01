#include<bits/stdc++.h>
using namespace std;
char toLowerCase(char ch){
    if(ch>='a' && ch<='z')
        return ch;
    else
        return (ch-'A'+'a');
}
int main(){
    string s;
    cout<<"Enter the string: ";
    cin>>s;
    int freq[26];
    for (int i = 0; i < 26; i++){
        freq[i]=0;
    }
    for (int i = 0; i < s.length(); i++){
        int n=0;
        n=toLowerCase(s[i])-'a';
        freq[n]++;
    }
    int max=0;
    char maxChar;
    for (int i = 0; i < 26; i++){
        if(freq[i]>max){
            max=freq[i];
            maxChar=i+'a';
        }
    }
   cout<<"The maximum frequency character is:"<<maxChar;

    return 0;
}