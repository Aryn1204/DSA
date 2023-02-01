#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin>>a[i];
    int minProd=1;
    int maxProd=1;
    int currProd=1;
    for (int i = 0; i < n; i++){
        currProd*=a[i];
        if(currProd<0 && minProd<0){
         if((currProd*minProd)>maxProd){
            maxProd=currProd*minProd;
         }   
        }
        if(currProd<0){
            minProd=currProd;
            //currProd=1;
        }
        if(currProd>maxProd){
            maxProd=currProd;
        }
        if(currProd==0){
            currProd=1;
            minProd=1;
        }
    }
    cout<<maxProd;
        
    return 0;
}