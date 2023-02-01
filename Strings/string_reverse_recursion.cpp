#include<bits/stdc++.h>
using namespace std;
void reverse(int start,int end,string& s){
    //base case
    if(start>end)
        return;
    swap(s[start],s[end]);
    start++;
    end--;
    reverse(start,end,s);
}
int main(){
    string a="Aryan";
    reverse(0,a.length()-1,a);
    cout<<a;
}