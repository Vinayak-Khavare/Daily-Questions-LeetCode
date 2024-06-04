class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char, int> dict;
        for(auto x: s){
            dict[x]+=1;
        }

        int res = 0;
        bool isodd = false;
        for(auto pair: dict){
            if(pair.second>1 && pair.second%2==0){
                res+=pair.second;
            }
            else{
                res+=(pair.second-1);
                isodd = true;
            }
        }
        if(isodd) return res+1;
        return res;
    }
};