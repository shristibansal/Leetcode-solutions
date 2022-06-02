class Solution {
public:
    bool isValid(string s) {
        stack<char> val;
        for(auto i : s)
        {
            if( i == '(' || i == '[' || i == '{')
                val.push(i);
            else
            {
                if(val.empty())
                    return false;
                if(i == ')' && val.top() != '(')
                    return false;
                if(i == ']' && val.top() != '[')
                    return false;
                if(i == '}' && val.top() != '{')
                    return false;
                val.pop();
            }
        }
        return val.empty();
    }
};