class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> result;
        _getPermutations(result, nums, 0, nums.size() - 1);
        return result;
    }
    void _getPermutations(vector<vector<int>>& result, vector<int> nums, int l, int r){
        if(l == r){
            result.push_back(nums);
            return;
        } else {
            for(int i = l; i <= r; i++){
                swap(nums[l], nums[i]);
                _getPermutations(result, nums, l + 1, r);
                swap(nums[l], nums[i]);
            }
        }
    }
};
