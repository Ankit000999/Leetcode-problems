class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        
        sort(nums.begin(),nums.end());
        vector<int> res;
        
        for(int i=0; i<nums.size()-1;)
        {
            res.push_back(nums[i+1]);
            res.push_back(nums[i]);
            i = i+2;
        }
        
        return res;
    }
};