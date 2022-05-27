class Solution {
public:
    bool isPalindrome(string s) {
        int st = 0, e = s.size() - 1;
        while(st < e)
        {
            if(!(isalnum(s[st])))
               st++;
            else if(!(isalnum(s[e])))
                e--;
            else if(tolower(s[st]) != tolower(s[e]))
                return false;
            else{
                st++;
                e--;
            }
        }
        return true;
    }
};