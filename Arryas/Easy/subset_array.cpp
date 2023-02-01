#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,count=0;
    unordered_set <int> hash;
    cout<<"Enter the sizes of both the arrays: "<<endl;
    cin>>n>>m;
    int a[n],b[m];
    cout<<"Enter the elements for first array: "<<endl;
    for (int i = 0; i < n; i++)
        cin>>a[i];
    cout<<"Enter the elements for second array: "<<endl;
    for (int i = 0; i < m; i++)
        cin>>b[i];
    for (int i = 0; i < n; i++)
        hash.insert(a[i]);
    for (int i = 0; i < m; i++)
        if (hash.find(a[i])!=hash.end())
            count++;
    if (count==m)
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;
    return 0;
}
