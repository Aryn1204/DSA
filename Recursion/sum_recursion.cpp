#include<bits/stdc++.h>
using namespace std;
int printer(int n){
    if(n==1)
        return 1;
    int sum=n*printer(n-1);
    return sum;   
}
int main(){
    int ans=printer(5);
    cout<<ans;
    return 0;
}