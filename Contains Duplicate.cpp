class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> st;
        bool result=true;
        for (int i = 0; i < nums.size(); i++) {
            st.insert(nums[i]);
        }
        if(nums.size()==st.size()){
            result = false;
        }
        return result;
    }
};
