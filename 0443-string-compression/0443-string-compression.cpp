class Solution {
public:
    int compress(vector<char>& chars) {
        int cnt=0;
        vector<int>ans;
        int i=0;
        int j=0;
        int k=0;
        while(j<chars.size()){
            while(j<chars.size() && chars[i] == chars[j]){
                cnt++;
                j++;
            }
            chars[k] = chars[i];
            k++;
            if(cnt>1){
                string s = to_string(cnt);
            for(int p=0;p<s.size();p++){
                chars[k] = s[p];
                k++;
            }
            }
            
            i=j;
            cnt=0;
        }
        return k;
    }
};