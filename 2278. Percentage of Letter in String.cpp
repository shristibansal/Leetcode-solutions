class Solution {
public:
    int percentageLetter(string s, char letter) {
        int count = 0;
        for(int i = 0; i < s.length(); i++)
        {
            if(s[i] == letter)
             count++;
        }
        return (count*100)/s.length();
    }
};


//using in-built count 
class Solution {
public:
    int percentageLetter(string s, char letter) {
        return 100.0*count(begin(s), end(s), letter)/size(s);
    }
};