class Solution {
public:
    string decodeString(string s) {
        
       stack<string> sta;
        sta.push("");
        stack<int> repeat;
        int n = s.length();
        for (int i = 0; i < n; ++i) {
            if (isalpha(s[i])) {
                sta.top() += s[i];
            } else if (isdigit(s[i])) {
                int num = 0;
                while (isdigit(s[i])) {
                    num *= 10;
                    num += s[i] - '0';
                    ++i;
                }
                
                repeat.push(num);
                sta.push("");
            } else if (s[i] == ']') {
                int num = repeat.top();
                repeat.pop();
                string tmp = sta.top();
                sta.pop();
                for (int i = 0; i < num; ++i) {
                    sta.top() += tmp;
                }
            }
        }
         return sta.top();
     
    }
};