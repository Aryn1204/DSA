class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int> hash;
        int ans=0;
        for(int i=0;i<nums.size();i++)
            hash[nums[i]]++;
         for (auto& it : hash) 
            if (it.second == 1)  
                ans=it.first;
        return ans;
    }
};