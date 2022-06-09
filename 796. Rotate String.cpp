class Solution {
public:
    string rotate(string s)
    {       
        char c = s[0];
        s.erase(0,1);
        s = s + c;
        return s;
    }
    bool rotateString(string s, string goal) {
        for(int i = 0; i < s.size(); i++)
        {
            if(s == goal)
                return true;
            else
                s = rotate(s);
        }
        return false;
    }
};


// another approach
class Solution {
public:
    bool rotateString(string s, string goal) {
         if(s.size() != goal.size())
            return false;
        if(s == goal) 
            return true; 
        s = s + s;    
        int x = s.find(goal);
        if(x < 0)
            return false;   
        return true;
    }
};