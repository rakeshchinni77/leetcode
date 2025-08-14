class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int l = 0,temp = 0,cnt = 0;
        if(nums.size() == 1 &&  nums[0] != k) return 0;
       
        for(int r=0;r<nums.size();r++){
            temp+=nums[r];
            while(temp > k){
                temp -= nums[l];
                l++;
            }
            if(temp == k){
                cnt++;
            }
            
        }
        return cnt;
    }
};
