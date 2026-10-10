class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string c = strs[0];
        for (int i=0; i < strs.size(); i++ ){
            int len = min(c.size(), strs[i].size());
            c = c.substr(0, len);
            for (int j=0; j < len; j++){
                if (c.empty()) return c; 
                if (c[j] != strs[i][j]){
                    c = c.substr(0, j);
                    break;
                }
            }
        }
        return c;
    }
};