#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,i=0,j=0,count=0;
    cout<<"Enter the sizes of both the arrays: "<<endl;
    cin>>n>>m;
    int a[n],b[m];
    cout<<"Enter the elements for first array: "<<endl;
    for (int i = 0; i < n; i++)
        cin>>a[i];
    cout<<"Enter the elements for second array: "<<endl;
    for (int i = 0; i < m; i++)
        cin>>b[i];
    while (j<m)
    {
        if (a[i]==b[j])
        {
            i++;
            j++;
        }
        else{
            count++;   
            break;
        }          
    }
    if(count==0)
        cout<<"No extra element";
    else
        cout<<"The extra element is at index: "<<(i+1);
    return 0;
}