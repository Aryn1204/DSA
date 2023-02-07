#include<bits/stdc++.h>
using namespace std;
void insertionSort(int arr[],int n,int i){
    if(i==n)
        return;
    int j=i;
    while (j>0 && arr[j-1]>arr[j]){
        swap(arr[j-1],arr[j]);
        j--;
    }
    insertionSort(arr,n,++i);
}
int main(){
    int arr[5]={2,4,3,1,5};
    int n=5;
    insertionSort(arr,n,0);
    for (int i = 0; i < n; i++)
        cout<<arr[i]<<" ";
}