class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int index=-1;
        for(int i=nums.size()-1;i>=0;i--){
            if(nums[i]!=val){
                index = i;
                break;
            }
        }
        if(index==-1) return 0;
        int high = index;
        int low=0;
        while(low<=high){
            if(nums[low] == val){
                swap(nums[low],nums[high]);
                high--;
            }
            else{
                low++;
            }
        }
        int cnt=0;
        while(cnt<=nums.size()-1){
            if(nums[cnt]==val){
                return cnt;
            }
            cnt++;
        }
        return cnt;
    }
};