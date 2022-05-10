class Solution {
public:
    int findLength(vector<int>& nums1, vector<int>& nums2) {
        
        
    int n=nums1.size();
        int n1=nums2.size();
        vector<vector<int>>dp(n+1,vector<int>(n1+1,0));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n1;j++)
            {
                
                if(i==0)
                {
                    dp[0][j]=0;
                }
                
                if(j==0)
                {
                    dp[i][0]=0;
                }
            }
        }
        int maxe=INT_MIN;
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=n1;j++)
            {
                if(nums1[i-1]==nums2[j-1])
                {
                     
                    dp[i][j]=dp[i-1][j-1]+1;
                
                }
                else{
                    dp[i][j]=0;
                        
                }
            }
        }
        for(int i=0;i<=n;i++)
        {
            for(int j=0;j<=n1;j++)
            {
                if(maxe<dp[i][j])
                {
                maxe=dp[i][j];
                }
            }
        }
        return maxe;
        
    }
};