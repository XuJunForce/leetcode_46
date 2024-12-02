class Solution {
public:

    void all_sort(vector<vector<int>>& res,vector<int> nums,vector<int> subSequence,int val){
        subSequence.push_back(val);
        if(nums.size()==0){
            res.push_back(subSequence);
            return;
        }
        for(int i=0;i<nums.size();i++){
            val = nums[i];
            nums.erase(nums.begin()+i);
            all_sort(res,nums,subSequence,val);
            nums.insert(nums.begin()+i,val);
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int>subSequence;
        int val = 0;
        for(int i = 0;i<nums.size();i++){
            val = nums[i];
            nums.erase(nums.begin()+i);
            all_sort(res,nums,subSequence,val);
            nums.insert(nums.begin()+i,val);
        }
        return res;
    }
};
