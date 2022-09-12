class Solution {
public:
    int longestValidParentheses(string s) {
        int n = s.length();
        if(n == 0) return 0;
        stack<int> st;
        st.push(-1);
        int len = 0;
        
        for(int i=0 ; i<n ; ++i){
            if(s[i] == '(') st.push(i);
            else if(s[i] == ')'){
                st.pop();
                if(st.empty()) st.push(i);
                else{
                    len = max(len,i - st.top());
                }
            }
        }
        return len;
    }
};