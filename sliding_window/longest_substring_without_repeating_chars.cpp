class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l = 0;
        unordered_set<char> hashset;
        long long max_length = 0;

        for(int r = 0; r < s.length(); ++r){
            while(hashset.find(s[r]) != hashset.end()){
                hashset.erase(s[l]);
                l++;
            }
            hashset.insert(s[r]);
            long long cur_length = r-l+1;
            max_length = std::max(max_length, cur_length);
        }
        return max_length;
    }
};
