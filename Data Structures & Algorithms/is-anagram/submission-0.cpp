class Solution {
public:
    bool isAnagram(string s, string t) {
        int letters[26] = {0};
        for (char i : s){
            letters[i-'a']++;
        }
        for (char i : t){
            letters[i-'a']--;
        }
        for (int i: letters){
            if (i !=  0) return false;
        }
        return true;
    }
};
