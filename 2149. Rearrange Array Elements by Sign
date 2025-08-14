class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>pos;
        vector<int>neg;
        for(auto it:nums) {
                if(it>0) {
                    pos.emplace_back(it);
                }
                else {
                    neg.emplace_back(it);
                }
            } 
        vector<int>res;
        int n=pos.size();
        for(int i=0;i<n;i++) {
            res.emplace_back(pos[i]);
            res.emplace_back(neg[i]);
        }
        return res;
    }
};
