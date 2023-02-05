#include<bits/stdc++.h>
using namespace std;

void adder(int arr[],int index,vector<int> &output,int n,int sum){

    if(index>=n){
        for (int i = 0; i < output.size(); i++){
            sum+=output[i];
        }
        cout<<sum<<" ";
        sum=0;
        return;
    }

    output.push_back(arr[index]);
    adder(arr,index+1,output,n,sum);
    output.pop_back();
    adder(arr,index+1,output,n,sum);

}

int main(){
    int arr[2]={2,3};
    vector<int> output;
    adder(arr,0,output,2,0);
    return 0;
}