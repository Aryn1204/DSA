class Solution {
public:
    int mySqrt(int x) {
        long long int s=0,e=x;
        long long int mid=s+(e-s)/2;
        
        while(s<=e){
            if(mid*mid==x)
                return mid;
            else if(mid*mid>x)
                e=mid-1;
            else
                s=mid+1;
            mid=s+(e-s)/2;
        }
        return (trunc(mid-1));
    }
};
