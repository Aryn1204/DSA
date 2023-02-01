#include<bits/stdc++.h>
using namespace std;
int binarySearch(int *a,int l,int r){
    if(r<l)
        return -1;
    int mid=l+(r-l)/2;
    if (a[mid]==0){
        return mid;
    }
    if (a[mid]==1){
     return binarySearch(a,mid+1,r);
    }
}
int count(int *a,int n){
    int ind=binarySearch(a,0,n-1);
    if(ind==-1)
        return 0;
    int count=1;
    int left=ind-1;
    while (left>=0 && a[left]==0)
    {
        count++;left--;
    }
    int right=ind+1;
    while (right<0 && a[right]==0)
    {
        count++;right++;
    }
    return count;
}

int main() {
    int n;
    cout<<"Enter the number of elements: "<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter the array elements: "<<endl;
    for (int i = 0; i < n; i++)
        cin>>a[i];
    int countZero=count(a,n);
     cout<<"The number of occurances of 0 is:"<<countZero;   

    return 0;
}