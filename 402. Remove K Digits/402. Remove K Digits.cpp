class Solution {
public:
    string removeKdigits(string num, int k) {
        string s="";
        for(char c:num){
            while(s.size() && s.back()>c && k)
            {
                k--;
                s.pop_back();
            }
            if(s.size()||c!='0') s.push_back(c);
        }
        while(s.size() && k--)
            s.pop_back();
        return (s.size()==0)?"0":s;
    }
};

// Approach 2
class Solution {
public:
    string removeKdigits(string num, int k) {
        vector<int> stack;

        for(char c: num){
            (!stack.empty() && k>0 && stack.back()>c){
                stack.pop_back();
                k--;
            }
            stack.push_back(c);
        }

        while(k>0){
            stack.pop_back();
            k--;
        }

        string result = "";
        for(auto x: stack){
            if(result.empty() && x=='0')
                continue;
            else
                result+=x;
        }

        if(result.empty())
            return "0";
        else
            return result;
    }
};