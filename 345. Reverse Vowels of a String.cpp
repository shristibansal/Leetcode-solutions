class Solution {
public:
    string reverseVowels(string s) {
        int st=0,e=s.size()-1,x=0,y=0;
        while (st<e) {
            if (s[st]=='a'||s[st]=='e'||s[st]=='i'||s[st]=='o'||s[st]=='u'||s[st]=='A'||s[st]=='E'||s[st]=='I'||s[st]=='O'||s[st]=='U')
                 x++;
            else 
                st++;
            if (s[e]=='a'||s[e]=='e'||s[e]=='i'||s[e]=='o'||s[e]=='u'||s[e]=='A'||s[e]=='E'||s[e]=='I'||s[e]=='O'||s[e]=='U')
                 y++;
            else 
                e--;
            if (x&&y) 
            {
                swap(s[st],s[e]);
                x=0;
                y=0;
                st++;
                e--;
            }
        }
        return s;
    }
};