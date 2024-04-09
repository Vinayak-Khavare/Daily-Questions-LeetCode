// Approach 1
class Solution {
public:
    bool checkValidString(string s) {
        int open=0, close=0;

        for(int i = 0; i<s.size(); i++){
            if(s[i]=='(' || s[i]=='*'){
                open++;
            }
            else{
                if(open==0){
                    return false;
                }
                else{
                    open--;
                }
            }
        }

        for(int i = s.size()-1; i>=0; i--){
            if(s[i]==')' || s[i]=='*'){
                close++;
            }
            else{
                if(close==0){
                    return false;
                }
                else{
                    close--;
                }
            }
        }

        return true;
    }
};


// Approach 2
class Solution {
public:
    bool checkValidString(string s) {
        int openL = 0, openR = 0;

        for(char x: s){
            if(x=='('){
                openL++;
                openR++;
            }
            
            else if(x==')'){
                openL--;
                openR--;
            }

            else{
                openL--;
                openR++;
            }

            if(openR<0){
                return false;
            }
            if(openL<0){
                openL=0;
            }
        }

        return (openL==0);
    }
};