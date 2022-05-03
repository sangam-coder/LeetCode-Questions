class Solution {
public:
    int minimumMountainRemovals(vector<int>& nums) {
        int n=nums.size();
   vector<int>LIS(n,1);
    
   vector<int>LDS(n,1);
       
        // calculate the longest increase subsequence (LIS) for every index i
        for(int i=1 ; i < n ; i++)
        {
            for(int j = 0 ; j < i ; j++)
            {
                if(nums[i] > nums[j] && LIS[j]+1 > LIS[i])
                    LIS[i] = LIS[j]+1;
            }
        }
        
		// calculate the longest decreasing subsequence(LDS) for every index i and keep track of the maximum of LIS+LDS
        int maxe = 0;
        for(int i=n-2 ; i >= 0 ; i--)
        {
            for(int j = n-1 ; j > i ; j--)
            {
                if(nums[i] > nums[j] && LDS[j]+1 > LDS[i])
                    LDS[i] = LDS[j]+1;
            }
            
            if(LIS[i] > 1 && LDS[i] > 1) 
                maxe = max(LIS[i]+LDS[i]-1, maxe);
        }
        return n - maxe;
    }
};