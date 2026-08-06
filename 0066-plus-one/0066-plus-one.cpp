class Solution {
public:
    vector<int> plusOne(vector<int>& nums) {
        int carry =1;
        int sum=0;
       
        for(int i=nums.size()-1;i>=0;i--){
            sum = nums[i]+1;
            nums[i] = sum%10;
            carry = sum/10;
            if(carry==0) break;
        }
        if(carry != 0){
            nums.insert(nums.begin(),1);
        }
        return nums;
    }
};