#include<bits/stdc++.h>
using namespace std;
bool check(int arr[],int s,int e){
    if(s>=e)
        return true;
    int mid=s+(e-s)/2;
    if(arr[mid-1] <= arr[mid] && arr[mid+1] >= arr[mid]){
        check(arr,s,mid-1);
        check(arr,mid+1,e);
    }
    else
        return false;
}
int main(){
    int arr[5]={5,2,1,3,4};
    int n=5;
    bool ans=check(arr,0,n-1);
    if(ans)
        cout<<"Sorted"<<endl;
    else
        cout<<"Unsorted"<<endl;
}