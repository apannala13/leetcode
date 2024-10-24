class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int> hashmap_ransom;
        unordered_map<char, int> hashmap_mag;
        for(int i = 0; i < ransomNote.length(); ++i){
            hashmap_ransom[ransomNote[i]]++;
        }
        for(int i = 0; i < magazine.length(); ++i){
            hashmap_mag[magazine[i]]++;
        }
        for(auto &kv: hashmap_ransom){
            if(hashmap_ransom.find(kv.first) == hashmap_mag.end() || hashmap_mag[kv.first] < kv.second){
                return false;
            }
        }
        return true;
    }
};
