class Solution {
public:
    bool checkValidString(string str) {
      stack<char> s;        
        for(char i:str)
        {
            if(i=='(' || i=='*')
            {
                s.push(i);
            }
            else{
                if(s.empty())
                    return false;
                int n=0;
                while(!s.empty() && s.top()=='*')
                {
                    n++;
                    s.pop();
                }
                if(!s.empty() && s.top()=='(')
                    s.pop();
                else 
                    n--;
                while(n--)
                    s.push('*');                
            }
        }
        int check=0;
        while(!s.empty())
        {
            if(s.top()=='(')
                check++;
            else if(s.top()=='*' && check<=0)
                check--;
            s.pop();
        }
        return check<=0 ? true:false;
    }
};