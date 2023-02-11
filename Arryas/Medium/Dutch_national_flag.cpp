class Solution {
public:
    void sortColors(vector<int>& nums) {
        //Everything to left of low should be a 0.
        //Everything to right of high should be a 2.
        //Now 1s are in between low and high.
        //Take 3 pointers.
        int low=0;
        int mid=0;
        int high=nums.size()-1;
        while(mid<=high){
            if(nums[mid]==0){
                //Swap low and mid if nums[mid]==0 then increment,so 0s stay to left of low.
                swap(nums[low],nums[mid]);
                low++;
                mid++;
            }
            else if(nums[mid]==1){
                //Just increase mid if nums[mid]==1.
                mid++;
            }
            else{
                //Swap mid and high if nums[mid]==2,and decrement just high,so 2s stay to right of high.
                swap(nums[mid],nums[high]);
                high--;
            }
        }
    }
};
