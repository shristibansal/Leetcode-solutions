class Solution {
public:    
    void reverseString(vector<char>& s) {
        int i,j;
        char a;
        for(i=0, j = s.size() - 1; i <= (s.size() - 1)/2 ; i++, j--)
        {   
            a = s[i];
            s[i] = s[j];
            s[j] = a;           
        }       
    }
};