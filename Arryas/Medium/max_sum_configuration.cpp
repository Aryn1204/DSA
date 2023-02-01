#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of elements: "<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter the array elements: "<<endl;
    for (int i = 0; i < n; i++)
        cin>>a[i];
    int iSum=0,fSum=0,eSum=0;
    for (int i = 0; i < n; i++){
        eSum+=a[i];
        iSum+=a[i]*i;
    }
    int maxSum=iSum;
    for(int i=1;i<n-1;i++){
        fSum=iSum-eSum+(n*a[i-1]);
        if(fSum>maxSum){
            maxSum=fSum;
        }
        iSum=fSum;
    }
    cout<<"The maximum sum configuration is: "<<maxSum<<endl;
    return 0;
}