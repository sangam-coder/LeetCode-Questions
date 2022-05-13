class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
     
          multiset<int> s(nums1.begin(), nums1.end());
    vector<int> out;
    for (int x : nums2){
            if(s.count(x)){
                
                    out.push_back(x);
                multiset<int>::iterator itr=s.find(x);
                s.erase(itr);
                
            }
                
    
        
    }
    return out;
    }
    
};