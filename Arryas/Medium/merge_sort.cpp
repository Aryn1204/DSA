class Solution{
void merge(int arr[], int l, int m, int r)
    {
         // Your code here
         
         int k=l;
         int j=m+1;
         int i=l;
         int b[l+r];
         while(i<=m && j<=r)
         {
             if(arr[i]<=arr[j])
             {
                 b[k]=arr[i];
                 i++;
             }
             else{
                 b[k]=arr[j];
                 j++;
             }
             k++;
         }
         while(i<=m){
             b[k++]=arr[i++];
         }
         while(j<=r){
             b[k++]=arr[j++];
         }
         k=l;
         while(k<=r){
             arr[k]=b[k];
             k++;
         }
    }
    public:
    void mergeSort(int arr[], int l, int r)
    {
        //code here
        
        if(l<r){
            int mid=(l+r)/2;
            mergeSort(arr,l, mid );
            mergeSort(arr,mid+1,r );
            merge(arr, l, mid, r);
        }
    }
};
