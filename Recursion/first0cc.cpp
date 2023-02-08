#include<bits/stdc++.h>
using namespace std;
int first(int arr[],int low,int high,int x){
   if (high >= low) {
        int mid = low + (high - low) / 2;
        if ((mid == 0 || x > arr[mid - 1]) && arr[mid] == x)
            return mid;
        else if (x > arr[mid])
            return first(arr, (mid + 1), high, x);
        else
            return first(arr, low, (mid - 1), x);
    }
    return -1; 
}

int last(int ){

}

int main(){
    int arr[5]={1,2,2,2,3};
    cout<<first(arr,0,4,2)<<endl;
    return 0;
}