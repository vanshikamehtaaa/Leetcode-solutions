class Solution {
public:
    int lengthOfLastWord(string s) {
        reverse(s.begin(),s.end());
        int i=0;
        int cnt=0;
        while(i<s.size()){
            while(i<s.size() && isspace(s[i])) i++;
            while(i<s.size() && !isspace(s[i])){
                cnt++;
                i++;
            }
            break;
        }
        return cnt;
    }
};