class Solution {
public:
    int scoreOfString(string s) {
        int n = s.length();
        int result = 0;

        for(int i=1; i<n; i++){
            result+=abs(int(s[i])-int(s[i-1]));
        }

        return result;
    }
};