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
    int l=0,h=n-1;
    int ls=a[0],hs=a[n-1];
    while (h!=l)
    {
        if (hs>ls){
            l++;
            ls+=a[l];
        }
        else if(ls>hs){
            h--;
            hs+=a[h];
        }
        else{
            l++;
            ls+=a[l];
            h--;
            hs+=a[h];
        }
    }
    if (hs==ls)
        cout<<"The equilibirium point is: "<<a[l]<<endl;
    else
        cout<<"No equilibirium point";
    
    
    return 0;
}