class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> temp;
        for(string s : strs){
            string sorted = s;
            sort(sorted.begin(), sorted.end());
            temp[sorted].push_back(s);
        }

        vector<vector<string>> result;
        for(auto key : temp){
            result.push_back(key.second);
        }

        return result;
        
    }
};
