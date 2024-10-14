class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> res;
        
        for(const string &s: strs){
            string key = s;
            sort(key.begin(), key.end());
            res[key].push_back(s);
        }
        vector<vector<string>> result;
        for(auto &r: res){
            result.push_back(r.second);
        }
        return result;
    }
};


//python, easier:
// class Solution:
//     def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
//         res = defaultdict(list)

//         for s in strs:
//             key = tuple(sorted(s))
//             res[key].append(s)

//         return list(res.values())
