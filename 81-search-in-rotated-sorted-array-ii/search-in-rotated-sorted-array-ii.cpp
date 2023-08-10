class Solution {
public:
    bool search(vector<int>& nums, int target) {
        set<int>st;
        for(int i=0;i<nums.size();i++){
            st.insert(nums[i]);
        }
        nums.clear();
        for(auto it: st){
            nums.push_back(it);
        }
        int pivot =0;
        int n= nums.size();
        int low =0;
        int high = n-1;

       
    while (low < high) {
        int mid = (high + low)/ 2;
        if (nums[mid] > nums[high])
            low = mid + 1;
        else
            high = mid;
    }

        pivot = low;

        low =0;
        high = n-1;

        while(high >= low){
            int mid = (low + high)/2;
            int realmid = (mid + pivot)%n;

            if(nums[realmid] == target) return true;
            else if(nums[realmid] > target) high = mid-1;
            else low = mid+1;
        }

        return false;
    }
};