#include<bits/stdc++.h>
using namespace std;

void printer(int arr[],int index,vector<int> &output,int n){

    if(index>=n){
        for (int i = 0; i < output.size(); i++)
            cout<<output[i];
        cout<<endl;
        return;
    }

    output.push_back(arr[index]);
    printer(arr,index+1,output,n);
    output.pop_back();
    printer(arr,index+1,output,n);

}

int main(){
    int arr[3]={1,2,3};
    vector<int> output;
    printer(arr,0,output,3);
    return 0;
}