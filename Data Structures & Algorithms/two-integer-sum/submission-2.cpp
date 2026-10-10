class Solution {
   public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // comp, index
        unordered_map<int, int> comp;
        for (int i = 0; i < nums.size(); i++) {
            comp.insert_or_assign(target - nums[i], i);
        }
        for (int i = 0; i < nums.size(); i++) {
            auto it = comp.find(nums[i]);
            if (it != comp.end()) {
                int c = it->second;
                if (c == i) continue; 
                if (c > i) {
                    return { i, c };
                } else {
                    return { c, i };
                }
            }
        }
        return {};
    }
};
