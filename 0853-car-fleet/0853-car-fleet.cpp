class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        stack<double>st;
        vector<double>time(position.size());
        unordered_map<int,int>m;
        for(int i=0;i<position.size();i++){
            m[position[i]] = speed[i];
        }
          sort(position.begin(),position.end());
        for(int i=0;i<position.size();i++){
            time[i] = double(target-position[i])/m[position[i]];
        }
        for(int i =time.size()-1;i>=0;i--){
           
            if(st.empty() || time[i]>st.top()){
                st.push(time[i]);
            } 
               
            }

        
         
        return st.size();
    }
};