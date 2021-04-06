class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> v;
        int sum=0;
        for(auto c: nums){
            sum+=c;
            v.push_back(sum);
        }
        return v;
    }
};
