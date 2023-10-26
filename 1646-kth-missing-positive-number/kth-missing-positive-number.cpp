class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
       int high = arr.size() ;
       int low = 0;

       while(high > low){
           int mid = (high - low)/2 + low;

           if(arr[mid] - mid > k) high = mid;
           else low = mid+1;
       }
       return low + k;
    }

};