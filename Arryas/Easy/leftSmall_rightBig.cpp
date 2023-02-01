#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of integers: "<<endl;
    cin>>n;
    int a[n];
    int small[n];
    int large[n];
    cout<<"Enter the array elements: "<<endl;
    for (int i = 0; i < n; i++)
        cin>>a[i];
    for (int i = 0; i < n; i++){
        small[i]=0;
        large[i]=0;
    }
    int min=a[0],max=a[n-1];
    int j=1,k=1;
    small[0]=a[0];
    large[0]=a[n-1];
    for (int i = 1; i < n; i++){
        if(a[i]>min){
            small[j]=a[i];
            min=a[i];
            j++;
        }
    }
    for (int i = n-2; i > 0; i--){
        if(a[i]<max){
            large[k]=a[i];
            max=a[i];
            k++;
        }
    }
    j=0,k=n-1;
    while (j<n){
        if(large[k]==0)
            k--;
        if(large[k]==small[j]){
            cout<<"The element is: "<<large[k]<<endl;
            break;
        }
        else if(large[k]<small[j]){
            k--;
        }
        else{
            j++;
        }
    }
    return 0;
}