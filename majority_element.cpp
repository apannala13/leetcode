class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> hashmap;
        for(int i = 0; i < nums.size(); ++i){
            hashmap[nums[i]]++;
        }
        for(auto &kv: hashmap){
            if(kv.second > nums.size()/2){
                return kv.first;
            }
        }
        return 0;
    }
};
