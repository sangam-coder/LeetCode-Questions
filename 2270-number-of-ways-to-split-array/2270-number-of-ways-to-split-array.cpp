class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
     
        
       
      long long sum = 0;
        for(auto x : nums) sum += x;
        int n = nums.size();
        long long lsum = 0 , cnt = 0;
        for(int i = 0 ; i < n-1 ; i++){
            lsum += nums[i];
            sum -= nums[i];
            if(lsum >= sum) cnt++;
        }
        return cnt;
    }
};