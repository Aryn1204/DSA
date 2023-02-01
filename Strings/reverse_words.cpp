#include<bits/stdc++.h>
using namespace std;

void reverse(char* ch,int n){
    int s=0;
    int e=n-1;
    while(s<e){
        swap(ch[s++],ch[e--]);
    }
}
int main(){
    char name[20];
    cout<<"Enter the string: "<<endl;
    cin>>name;
    reverse(name,5);
    cout<<name;
    return 0;
}