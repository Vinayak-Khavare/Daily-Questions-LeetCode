// class Solution {
// public:
//     vector<int> singleNumber(vector<int>& nums) {
//         unordered_map<int, int> dict;

//         for(auto x: nums){
//             ++dict[x];
//         }

//         vector<int> res;
//         for(auto pair: dict){
//             if(pair.second==1){
//                 res.push_back(pair.first);
//             }
//         }

//         return res;
//     }
// };


class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int n = nums.size();
        vector<int> result(2);
        int index = 0;

        for (int i = 0; i < n; ++i) {
            bool found = false;
            for (int j = 0; j < n; ++j) {
                if (i != j && nums[i] == nums[j]) {
                    found = true;
                    break;
                }
            }
            if (!found) {
                result[index++] = nums[i];
                if (index == 2) {
                    break;
                }
            }
        }

        return result;
    }
};