// approach 1
class Solution {
public:
    string minRemoveToMakeValid(string s) {
        stack<pair<char, int>> par;

        for(int i = 0; i<s.size(); i++){
            if(s[i]=='('){
                par.push({s[i], i});
            }
            else if(s[i]==')'){
                if(!par.empty() && par.top().first=='('){
                    par.pop();
                }
                else{
                    par.push({s[i], i});
                }
            }
        }

        unordered_map<int, bool> hash;
        while(!par.empty()){
            hash[par.top().second]=true;
            par.pop();
        }
        
        string res = "";
        for(int i = 0; i<s.size(); i++){
            if(!hash[i]){
                res+=s[i];
            }
        }

        return res;
    }
};


// approach 2
class Solution {
public:
    string minRemoveToMakeValid(string s) {
        stack<int> stk;

        for(int i = 0; i<s.size(); i++){
            if(s[i]=='('){
                stk.push(i);
            }
            else if(s[i]==')'){
                if(!stk.empty()){
                    stk.pop();
                }
                else{
                    s[i]='*';
                }
            }
        }

        while(!stk.empty()){
            s[stk.top()]='*';
            stk.pop();
        }

        string res = "";
        for(int i = 0; i<s.size(); i++){
            if(s[i]!='*'){
                res+=s[i];
            }
        }

        return res;
    }
};


// Optimal solution
class Solution {
public:
    string minRemoveToMakeValid(string s) {
        int count = 0;
        int n = s.size();

        for(int i = 0; i < n; i++){
            if(s[i] == '(') count++;
            else if(s[i] == ')') count--;

            if(count < 0){
                s.erase(s.begin() + i);
                i--;
                n--;
                count = 0;
            }
        }

        int i = n - 1;
        while(i >= 0 && count > 0){
            if(s[i] == '('){
                s.erase(s.begin() + i);
                count--;
                n--;
            }
            i--;
        }
        
        return s;
    }
};