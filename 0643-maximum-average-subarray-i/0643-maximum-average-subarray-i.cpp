class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double sum = 0.00000;
        for(int i=0;i<k;i++){
            sum += nums[i];
        }
        double maxsum = sum;
        for(int i=k;i<nums.size();i++){
            sum += nums[i];
            sum -= nums[i-k];
            if(sum>maxsum) maxsum = sum;
        }
        double ans = maxsum/k;
        return ans;
    }
};