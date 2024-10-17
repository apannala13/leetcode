class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char, int> hashmap;
        int l = 0;
        int longest = 0;
        int max_val = 0;
        
        for(int r = 0; r < s.length(); ++r){
            hashmap[s[r]]++;
            max_val = std::max(max_val, hashmap[s[r]]);
            if((r - l + 1) - max_val > k){
                hashmap[s[l]]--;
                l++;  
            }
            longest = std::max(longest, r-l+1);
        }
        return longest;
    }
};
