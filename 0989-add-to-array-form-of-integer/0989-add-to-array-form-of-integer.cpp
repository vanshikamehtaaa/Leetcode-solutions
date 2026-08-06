class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        vector<int>ans;
        int carry =0;
        int i=num.size()-1;
        int knum;
        int sum=0;
        while(i>=0 || k!=0){
            knum = k%10;
            k=k/10;
            if(i>=0){
                 sum = num[i]+knum+carry;
            }else{
                 sum = knum+carry;
            }
            
            int result = sum%10;
             ans.push_back(result);
            carry = sum/10;
            i--;
        }
        
        if(carry!=0){
            ans.insert(ans.end(),carry);
        }
       
        reverse(ans.begin(),ans.end());
        return ans;
    }
};