class Solution {
public:
    vector<int>orign; int n;
    Solution(vector<int>& nums) {
      orign=nums; 
        n=orign.size();
    }
    
    
        vector<int> reset() {
        return orign;
    }
    
    vector<int> shuffle() {
     
        vector<int>suffled=orign;
        int left=n;
        for(int i=n-1;i>=0;i--)
        {
                int j=rand()%left;
            swap(suffled[i],suffled[j]);
            left--;
        }
        return suffled;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(nums);
 * vector<int> param_1 = obj->reset();
 * vector<int> param_2 = obj->shuffle();
 */