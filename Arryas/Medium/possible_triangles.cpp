#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,count=0;
    cout<<"Enter the number of integers: "<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter the array elements: "<<endl;
    for (int i = 0; i < n; i++)
        cin>>a[i];
    if(n<3)
        cout<<"No Triangles are possible"<<endl;
    else{
        sort(a,a+n);
        for(int i=n-1;i>=0;i--){
            int val=a[i];
            int l=0,r=i-1;
            while (l<r){
                if(a[l]+a[r]>val){
                    count+=r-l;
                    r--;
                }
                else
                    l++;
            }
        }
        cout<<"The number of triangles is: "<<count;
    }
    return 0;
}