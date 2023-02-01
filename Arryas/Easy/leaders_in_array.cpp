#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of elements: "<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter the array elements: "<<endl;
    for (int i = 0; i < n; i++)
        cin>>a[i];
    int leader=a[n-1];
    cout<<"The leaders are: "<<endl;
    cout<<leader<<" ";
    for (int i = n-2; i > 0; i--){
        if(a[i]>leader){
            cout<<a[i]<<" ";
            leader=a[i];
        }           
    }
    return 0;
}