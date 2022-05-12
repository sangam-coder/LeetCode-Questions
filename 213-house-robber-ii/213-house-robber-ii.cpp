class Solution {
public:
   int dp[1005];
    int rec(int i, int end, vector<int> v) {
        int n = v.size();
        if (i > end) return 0;
        if (dp[i] != -1) return dp[i];
        int x = rec(i + 1, end, v);
        int y = v[i] + rec(i + 2, end, v);
        return dp[i] = max(x, y);
    }
    
    int rob(vector<int>& nums) {
        memset(dp, -1, sizeof dp);
        int n = nums.size();
        if (n == 1) return nums[0];
        int x = rec(0, n - 2, nums);
        memset(dp, -1, sizeof dp);
        int y = rec(1, n - 1, nums);
        return max(x, y);
    }
};