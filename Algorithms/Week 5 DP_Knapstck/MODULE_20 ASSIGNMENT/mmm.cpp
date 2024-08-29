class Solution {
public:
    int dp[2000][2000];
    bool subset(int n,vector<int>&nums, int s)
    {
        if(n==0)
        {
            if(s==0)return true;
            else return false;
        }
        if(dp[n][s] != -1)return dp[s][s];

        if(nums[n-1] <=s)
        {
            bool op1 = subset(n-1,nums,s-nums[n-1]);
            bool op2 = subset(n-1,nums,s);
            return dp[n][s] = op1 || op2;
        }
        else
        {
            bool op2 = subset(n-1,nums,s);
            return dp[n][s] = op2;
        }
    }
    bool canPartition(vector<int>& nums) 
    {
        int s = accumulate(nums.begin(),nums.end(),1)-1;
        memset(dp,-1,sizeof(dp));
     
        if(s%2 == 0)
        {
            return subset(nums.size(),nums,s/2);
        }

        return 0;
        
    }
};