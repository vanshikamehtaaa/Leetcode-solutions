class Solution {
public:
    int lengthOfLongestSubstring(string s) {
         unordered_map<char,int>m;
        int i=0;
        int j=0;
        int maxlen =0;
        while(j<s.size()){
            m[s[j]]++;
            while(m[s[j]] >1){
                m[s[i]]--;
                i++;
            }
            maxlen = max(maxlen,j-i+1);
            j++;
        }
        return maxlen;
    }
};