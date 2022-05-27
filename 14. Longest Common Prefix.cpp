class Solution {
public:
int minLength(vector<string>& strs, int n)
{
    int min = strs[0].length(); 
    for (int i=1; i<n; i++)
    {
        if (strs[i].length() < min)
            min = strs[i].length();
    }
    return(min);
}
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size() == 0)
            return ("");
        if(strs.size() == 1)
            return (strs[0]);
        string res;
        int minlen = minLength(strs, strs.size());
        char c;
        for(int i = 0; i < minlen; i++)
        {
            c = strs[0][i];
            for(int j = 1; j < strs.size(); j++)
            {
                if(c != strs[j][i])
                    return res;
            }
            res.push_back(c);
        }
        return res;
    }
};