class Solution {
public:
    int appendCharacters(string s, string t) {
        int i=0, j=0;
        // int count=0;
        int n = s.length(), m = t.length();
        while(i<n && j<m){
            if(s[i]==t[j]){
                i++;
                j++;
            }
            else{
                i++;
            }
        }
        int count = m-j;
        return count;
    }
};