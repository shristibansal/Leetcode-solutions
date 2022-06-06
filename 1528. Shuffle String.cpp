class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        string ans = s;
        for(int i = 0;i < indices.size(); i++){
        ans[indices[i]] = s[i];
        }
        return ans;
    }
};

//map
class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        map<int, char> m;
        for(int i = 0; i < s.size(); i++)
        {
            m.insert({indices[i], s[i]});
        }
        string st = "";
        for(auto i: m)
        {
            st += i.second;
        }
        return st;
    }
};