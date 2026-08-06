class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        vector<int>ans;
        int result =0;
        for(int i=0;i<nums.size();i++){
            result = nums[nums[i]];
            ans.push_back(result);
        }
        return ans;
    }
};