class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int> x;
        int size = 0;
        int k = 0;
        for (int i=0; i<nums.size(); i++){
            if (x.find(nums[i]) == x.end()){
                nums[k++] = nums[i];
                x.insert(nums[i]);
                size++;
            }
        }
        return size;
    }
};