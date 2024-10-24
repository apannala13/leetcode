class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        float min_num = std::numeric_limits<float>::infinity();

        for(auto &n: nums){
            if(abs(n) < abs(min_num) || (abs(n) == abs(min_num) && n > min_num)){
                min_num = n;
            }
        }
        return min_num;
    }
};
