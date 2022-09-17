class Solution {
public:
    bool isPowerOfFour(int n) {
    if(n<=0) return false;
    float ans = log10(n)/log10(4);
    return (ans == int(ans) );
          
    }
};