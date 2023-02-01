#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of elements : "<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter the array elements: "<<endl;
    for (int i = 0; i < n; i++)
        cin>>a[i];
    int h=n-1,m=n-1;
    while (m>=0){
        if(a[m]==0){
            swap(a[m],a[h]);
            m--;
            h--;
        }
        else
            m--;
    }
    
    cout<<"The new array is: "<<endl;
    for (int i = 0; i < n; i++)
        cout<<a[i]<<" ";
    return 0;
}