class Solution {
public:
    int climbStairs(int n) 
    {
        int ans;
        vector<int>dp(n+2,0);
        
        dp[n]=1;
        for( int i=n-1;i>=0;i--)
        { 
            if(i>n)
            {
                return 0;
            }
            
           dp[i]=dp[i+1]+dp[i+2];

        }
        return dp[0];
        
    }
};
