class Solution {
public:
    int fib(int n) {
        int ans;
        
        if(n<=1)
            
            return n;
          
        return ans=fib(n-1)+fib(n-2);
    }
};