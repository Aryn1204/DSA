#include<iostream>
using namespace std;
int main(){
    int n;
    int t1,t2;
    cout<<"Enter the number of array elements: "<<endl;
    cin>>n;
    int a[n];
    t1=-1,t2=n;
    int handle;
    while (t1!=t2){
        cout<<"Enter\t1.push in stack 1\t2.push in stack 2\t3.pop in stack 1\t4.pop in stack 2"<<endl;
        cin>>handle;
        switch (handle)
        {
        case 1:
            int val;
            cout<<"Enter the value: "<<endl;
            cin>>val;
            t1++;
            a[t1]=val;
            break;
        case 2:
            cout<<"Enter the value: "<<endl;
            cin>>val;
            t2--;
            a[t2]=val;
            break;
        case 3:
            t1--;
            break;
        case 4:
            t2++;
            break;
        default:
            break;
        }
    }
    cout<<"The array elements are: "<<endl;
    for (int i = 0; i < n ; i++)
        cout<<a[i];
    
    return 0;
}