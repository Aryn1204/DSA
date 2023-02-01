#include<bits/stdc++.h>
using namespace std;
int binarySearch(int *a,int s,int e,int x){
    if(s<=e){
      int mid=s+(e-s)/2;
      if(a[mid]<=x)
        return binarySearch(a,mid+1,e,x);
      else
        return binarySearch(a,s,mid-1,x);
    }
}
int main(){
  int a[4]={3,1,2,4};
  int b[4]={1,1,2,0};
  sort(b,b+4);
  for(int i = 0; i < 4; i++){
    int index=binarySearch(b,0,3,a[i]);
    cout<<(index)<<" ";
  }
  return 0;
}