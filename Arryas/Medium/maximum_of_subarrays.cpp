#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cout<<"Enter the number of integers and the window size: "<<endl;
    cin>>n>>k;
    int a[n];
    cout<<"Enter the array elements: "<<endl;
    for (int i = 0; i < n; i++)
        cin>>a[i];
    int i=0,j=0;
    int ktemp=k;
    int max=0;
    cout<<"The max in every window is: "<<endl;
    while (i<n-(k-1)){
        if(a[j]>max)
            max=a[j];
        ktemp--;
        j++;
        if(ktemp==1){
            i++;
            j=i;
            ktemp=k;
            cout<<max<<" ";
            max=0;
        }
    }
    return 0;
}