#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,index,count=0;
    cout<<"Enter the number of characters: "<<endl;
    cin>>n;
    char s[n];
    char str[n];
    cout<<"Enter the first string"<<endl;
    for (int i = 0; i < n; i++)
        cin>>s[i];
    char first=s[0];
    cout<<"Enter the second string"<<endl;
    for (int i = 0; i < n; i++)
        cin>>str[i];
    for(int i = 0; i < n; i++)
        if(str[i]==first)
        index=i;
    int i=0;
    while (i<n){
        if(index==n){
            index=0;
        }
        if(s[i]==str[index]){
            i++;
            index++;
            count++;
        }
        else{
            i++;
            count++;
        }
    }   
    if(count==n)
        cout<<"They are rotations"<<endl; 
    else
        cout<<"They are not"<<endl;
    return 0;
}