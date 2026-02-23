class Solution {
public:
    int scoreDifference(vector<int>& nums) {
        int p1 = 0;
        int p2 = 0;
        int active = 1;
        int n  = nums.size();
        for(int i =0;i<n;i++){
            if((i+1)%6 == 0 && nums[i]%2 == 0){
                if(active == 1){
                    active = 2;
                    p2 += nums[i];
                }else{
                    active = 1;
                    p1 += nums[i];
                }
            }
            else if((i+1)%6 == 0){
                if(active == 1){
                    p1 += nums[i];
                }else{
                    p2 += nums[i];
                }
            }
            else if(nums[i]%2 == 0){
                if(active == 1){
                    p1 += nums[i];
                }else{
                    p2 += nums[i];
                }
            }
            else{
                if(active == 1){
                    active = 2;
                    p2 += nums[i];
                }else{
                    active = 1;
                    p1 += nums[i];
                }
            }
        }
        return p1 - p2;
    }
};
