#include<bits/stdc++.h>
using namespace std;

int printer(int arr[],int index,int currentSum,int sum,int n){

    if(index>=n){
        if(currentSum==sum)
            return 1;
        else
        return 0;
    }
    
    //exclude
    currentSum=currentSum+arr[index];
    int l = printer(arr,index+1,currentSum,sum,n);
    //include
    currentSum=currentSum-arr[index];
    int r = printer(arr,index+1,currentSum,sum,n);

    return (l+r);

}

int main(){

    int arr[3]={1,2,1};
    int sum=2;
    cout<<printer(arr,0,0,sum,3)<<endl;
    return 0;

}