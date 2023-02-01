#include<iostream>
using namespace std;
int main(){
    int n,d;
    cout<<"Enter the number of elements and the times need to be rotated: "<<endl;
    cin>>n>>d;
    int a[n];
    int aRotated[n];
    cout<<"Enter the array elements: "<<endl;
    for (int i = 0; i < n; i++)
        cin>>a[i];
    int j=0;
    for (int i = d; i < n; i++){
        aRotated[j]=a[i];
        j++;
    }
    for (int i = 0; i < d; i++){
        aRotated[j]=a[i];
        j++;
    }
    cout<<"The array after rotation is: "<<endl;
    for (int i = 0; i < n ; i++)
        cout<<aRotated[i]<<" ";
    return 0;
}