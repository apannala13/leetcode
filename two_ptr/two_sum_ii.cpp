class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int l = 0; 
        int r = numbers.size() - 1;

        while(l <= r){
            int current = numbers[l] + numbers[r];
            if(current > target){
                r--;
            }
            else if(current < target){
                l++;
            }
            else{
                return {l + 1, r + 1};
            }
        }
        return {};
    }
};




// class Solution {
// public:
//     vector<int> twoSum(vector<int>& numbers, int target) {
//         unordered_map<int, int> hashmap;

//         for(int i = 0; i < numbers.size(); ++i){
//             int diff = target - numbers[i];
//             if(hashmap.find(diff) != hashmap.end()){
//                 return {hashmap[diff] + 1, i + 1};
//             }
//             hashmap[numbers[i]] = i;
//         }
//         return {};
//     }
// };
