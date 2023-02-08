#include <bits/stdc++.h>
using namespace std;

int first(int arr[],int s,int e,int x){
    while(e>=s){
        int mid=s+(e-s)/2;
        if((mid==0 || x>arr[mid-1]) && arr[mid]==x)
            return mid;
        else if(x > arr[mid])
            s=mid+1;
        else
            e=mid-1;
    }  
    return -1;
}
int last(int arr[],int s,int e,int x,int n){
    while(e>=s){
        int mid=s+(e-s)/2;
        if((mid==n-1 || x<arr[mid+1]) && arr[mid]==x)
            return mid;
        else if(x<arr[mid])
            e=mid-1;
        else 
            s=mid+1;
    }
    return -1;
}
int main() {
    int arr[]={ 1, 2, 2, 2, 2, 3, 4, 7, 8, 8 };
    int firstO=first(arr,0,9,2);
    int lastO=last(arr,0,9,2,10);
    cout<<(lastO-firstO+1)<<endl;
    return 0;
}
