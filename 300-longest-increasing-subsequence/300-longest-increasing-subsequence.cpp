class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        
      vector<int> v;// empty vector
        for(int i=0;i<nums.size();i++)
        {
            auto it=lower_bound(v.begin(),v.end(),nums[i]);  //check whether lower bound of current element of nums is availale or not in v vector if available that meanns it point to that position if not then it points to v.end .
            if(it==v.end())                                  // if not available push this element as it is larger then all
                v.push_back(nums[i]);
            else
                *it=nums[i];                                 //if available then change that element with this element 
        }
                                                               //in this method we did not get v same increasing numbers but we get exact count  to get that we can change our code
        return v.size();
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    }
};