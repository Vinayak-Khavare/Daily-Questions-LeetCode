// Approach 1
class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int circle = 0, square = 0;

        for(auto x: students){
            if(x==0) 
                circle++;
            else
                square++;
        }

        for(auto v: sandwiches){
            if(v==0){
                if(circle==0)
                    return square;
                else
                    circle--;
            }
            else{
                if(square==0)
                    return circle;
                else
                    square--;
            }
        }

        return 0;
    }
};

// Approach 2
class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int count[] = {0, 0};

        for(auto x: students){
            if(x==0) 
                count[0]++;
            else
                count[1]++;
        }

        int res = sandwiches.size();
        for(auto i: sandwiches){
            if(count[i]==0)
                break;
            if(res==0)
                break;
            count[i]--;
            res--;
        }

        return res;
    }
};