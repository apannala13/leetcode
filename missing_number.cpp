class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int cur_sum = (n * (n + 1)) / 2;
        int vector_sum = std::accumulate(nums.begin(), nums.end(), 0); 
        return cur_sum - vector_sum; 
    }
};
