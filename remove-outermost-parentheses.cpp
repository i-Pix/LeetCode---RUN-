class Solution {
public:
    string removeOuterParentheses(string S) {
     string ans = "";
        int open = 0;
        for( auto c  : S){
        if(c == '(' and open++ > 0)
            ans +=c;
        if(c == ')' and open-- > 1)
            ans +=c;
        }
        return ans;        
         //          ( ( ) ( ) ) ( ( ) ) - test case 1
        //          0 1 2 1 2 1 0 1 2 1 - OPEN values
    }
};
