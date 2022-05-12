class Solution {
public:
    int get( vector<int>nums,int n,vector<int>&dp)
    {
        if(n==0)
        {
           
            return nums[0];
        }
        if(n==1)
        {
            return max(nums[0],nums[1]);
        }
        
        if(dp[n]!=-1)
        {
            return dp[n];
        }
        else{
        int notake=get(nums,n-1,dp);
        
       
        int take=nums[n]+get(nums,n-2,dp);
        int ans=max(notake,take);
        dp[n]=ans;
        return ans;
        }
    
    }
    int rob(vector<int>& nums) {
        
    int n=nums.size();
        vector<int>dp(n,-1);
       return get(nums,n-1,dp);
    }
};