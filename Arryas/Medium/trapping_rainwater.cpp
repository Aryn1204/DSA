#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,sum=0;
    cout<<"Enter the number of towers: "<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter the heights: "<<endl;
    for (int i = 0; i < n; i++)
        cin>>a[i];
    int left[n];
    int right[n];
    int leftmax=0;
    int rightmax=0;
    for (int i = 0; i < n; i++){
        if(a[i]>leftmax){
            leftmax=a[i];
        }
        left[i]=leftmax;
    }
    for (int i = n-1; i >=0; i--){
        if(a[i]>rightmax){
            rightmax=a[i];
        }
        right[i]=rightmax;
    }
    for (int i = 0; i < n; i++){
        if(left[i]<=right[i]){
            sum+=left[i]-a[i];
        }
        else{
            sum+=right[i]-a[i];
        }
    }
    cout<<"The trapped rainwater is: "<<sum<<endl;
    return 0;
}