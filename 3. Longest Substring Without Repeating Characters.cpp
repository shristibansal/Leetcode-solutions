class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.size() <= 1) 
            return s.size();
        map<char, int> m;
        int l = 0, c = 0;
        for(int i = 0; i < s.size(); i++)
        {
            l = max(l, i - c);
            if(m.find(s[i]) != m.end() && m[s[i]] >= c)
                c = m[s[i]] + 1;
            m[s[i]] = i;
        }
        if(l < s.size() - c) 
            return s.size() - c;
        return l;
        
    }
};