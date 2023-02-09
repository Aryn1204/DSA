class Solution{
public:

	void rearrange(int arr[], int n) {
	    int pos=0;
	    int neg=0;
	    for(int i=0;i<n;i++){
	        if(arr[i]>=0)
	            pos++;
	        else
	            neg++;
	    }
	    int positive[pos];
	    int negative[neg];
	    int j=0;
	    for(int i=0;i<n;i++){
	        if(arr[i]>=0){
	            positive[j]=arr[i];
	            j++;
	        }
	    }
	    j=0;
	    for(int i=0;i<n;i++){
	        if(arr[i]<0){
	            negative[j]=arr[i];
	            j++;
	        }
	    }
	    int k=0;
	    int l=0;
	    int i=0;
	    while(k<pos && l<neg){
	        arr[i]=positive[k];
	        k++;
	        i++;
	        arr[i]=negative[l];
	        l++;
	        i++;
	    }
	    if(pos>neg){
	        while(k<pos){
	            arr[i]=positive[k];
	            k++;
	            i++;
	        }
	    }
	    else{
	        while(l<neg){
	            arr[i]=negative[l];
	            l++;
	            i++;
	        }
	    }
	}
};
