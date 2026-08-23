class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char,int>m;
        int maxlen=0;
        int i=0;
        int maxfreq = 0;
        for(int j=0;j<s.size();j++){
            m[s[j]]++;
            maxfreq = max(maxfreq,m[s[j]]);
            
            while((j-i+1)-maxfreq > k && i<j){
                m[s[i]]--;
                i++;
            }
            maxlen = max(maxlen,j-i+1);
        }
        return maxlen;
    }
};