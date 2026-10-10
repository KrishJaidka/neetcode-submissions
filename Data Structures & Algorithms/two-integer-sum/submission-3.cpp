class Solution {
   public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // comp, index
        unordered_map<int, int> comp;
        for (int i = 0; i < nums.size(); i++) {
            auto c = comp.find(nums[i]);
            if (c != comp.end()){
                return {c-> second, i};
            }
            comp.insert({target - nums[i], i});
        }
        return {};
    }
};
