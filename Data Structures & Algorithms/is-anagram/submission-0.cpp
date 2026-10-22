class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char, int> comp;

        for(char i : s){
            comp[i] += 1;
        }

        for(char j : t){
            comp[j] -= 1;
        }

        for( auto it = comp.begin(); it != comp.end(); ++it){
            if(it->second != 0){
                return false;
            }
        }
        
        return true;


    }
};
