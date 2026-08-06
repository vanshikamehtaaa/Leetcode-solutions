class Solution {
public:
    string addStrings(string num1, string num2) {
        string s="";
        int carry =0;
        int i=num1.size()-1;
        int j=num2.size()-1;
        int p;
        int r;

        while(i>=0 || j>=0 || carry>0){

            if(i>=0){
                 p= num1[i] -'0';
            }else{
                p=0;
            }
            if(j>=0){
                  r= num2[j] -'0';
            }else{
                r=0;
            }
           
            int sum = p+r+carry;
            int digit = sum%10;
            carry = sum/10;
             s += to_string(digit);
             i--;
             j--;
        }
        reverse(s.begin(),s.end());
        return s;
    }
};