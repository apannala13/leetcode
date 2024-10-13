class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_set<int> hashset;
        long long count = 0;
        for(int i = 0; i < jewels.size(); ++i){
            hashset.insert(jewels[i]);
        }
        for(int j = 0; j < stones.size(); ++j){
            if(hashset.find(stones[j]) != hashset.end()){
                count += 1;
            }
        }
        return count;
    }
};
