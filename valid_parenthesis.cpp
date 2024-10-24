class Solution {
public:
    bool isValid(string s) {
        unordered_map<char, char> hashmap{{')', '('}, {']', '['}, {'}', '{'}};
        std::stack<char> stack;

        for(const char &letter:s){
            if(hashmap.find(letter) != hashmap.end()){
                if(!stack.empty() && stack.top() == hashmap[letter]){
                    stack.pop();
                } else{
                    return false;
                }
            } else{
                stack.push(letter);
            }
        }
        return stack.empty();
    }
};
