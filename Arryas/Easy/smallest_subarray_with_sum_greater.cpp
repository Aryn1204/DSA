#include<bits/stdc++.h>
using namespace std;
int main(){
  int a[6]={1,4,45,6,0,19};
  int x=51;
  int i=0,j=0,curr=1,minNumber=INT_MAX,sum=a[j];
  while(j<6){
    if(sum<x){
      j++;
      sum+=a[j];
      curr++;
    }
    if(sum>x){
      if((sum-a[i])>x){
          i++;
          curr--;
      }
     else{
         if(curr<minNumber){
            minNumber=curr;
            i=j;
            curr=1;
            sum=a[i];
         }
     }
    }
  }
    cout<<"The minimum subarray is: "<<minNumber<<endl;
  return 0;
}