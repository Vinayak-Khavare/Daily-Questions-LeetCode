class Solution {
public:
    bool check(char a, char b){
        return abs(a-b)==32;
    }

    string makeGood(string s) {
        string res = "";

        for(char c : s){
            if(!res.empty() && check(res.back(), c)){
                res.pop_back();
            }
            else{
                res+=c;
            }
        }

        return res;
    }
};


// Stacks approach
class Solution {
public:
    string makeGood(string s) {
        stack<char> result; // container
        for(char curr : s){
            if(!result.empty() && abs(result.top()-curr)==32){
                result.pop();
            }
            else result.push(curr);
        }

        int n = result.size();
        string good_str(n, ' ');
        int i = n-1;
        while(!result.empty()){
            good_str[i]=result.top();
            result.pop();
            i--;
        }

        return good_str;
    }
};