class Solution {
public:
    string reformat(string s) {
        string l;
        string d;
        for(auto i : s)
        {
            if(isdigit(i))
                d = d + i;
            else
                l = l + i;
        }
        if(abs(int(d.size() - l.size())) > 1)
            return "";
        int k = 0, a = 0, b = 0;
        while(a < l.size() && b < d.size())
        {
            s[k++] = l[a++];
            s[k++] = d[b++];
        }
        if(a < l.size())
            s[k] = l[a];
        else if(b < d.size())
        {
            s[k] = d[b];
            reverse(s.begin(), s.end() - 1);
        }
        return s;
    }
};