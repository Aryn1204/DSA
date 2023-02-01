#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k,count=0;
    cout<<"Enter the number of elements and the number of transactions : "<<endl;
    cin>>n>>k;
    int a[n];
    cout<<"Enter the array elements: "<<endl;
    for (int i = 0; i < n; i++){
        cin>>a[i];
        if(a[i]<0)
            count++;
    }
    if (k<count)
        for (int i = 0; i < n; i++){
            if (a[i]<0){
               a[i]=-a[i];
            }
        }
        else{
            for (int i = 0; i < n; i++){
            if (a[i]<0){
               a[i]=-a[i];
               k--;
            }
        }
        int min=0;
        for (int i = 0; i < n; i++)
            if(a[i]<a[min])
                min=i;
        while (k!=0)
        {
            a[min]=-a[min];
            k--;
        }
        }
        int sum=0;
        for (int i = 0; i < n; i++)
            sum+=a[i];
        cout<<"The sum after k transactions is: "<<sum;
    
    return 0;
}