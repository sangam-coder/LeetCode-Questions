class Solution {
public:
    void get(string digits,string v,vector<string>&ans)
    {
        if(digits.size()==0)
        {
         ans.push_back(v);
        return;
        }
        
     vector<string>s={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        
         string res=s[digits[0]-'0'];
        
        digits.erase(digits.begin());
        
        for(int i=0;i<res.length();i++)
        {
            
          get(digits,v+res[i],ans);
        }
        
    }
    vector<string> letterCombinations(string digits) {
   
    vector<string>v;
        if(!digits.size())
        {
            return {};
        }
        vector<string>ans;
        get(digits,"",ans);
        return ans;
    }
};