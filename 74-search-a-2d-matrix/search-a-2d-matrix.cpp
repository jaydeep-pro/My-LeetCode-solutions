class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n= matrix.size();
        int m = matrix[0].size();
        int s = 0;
        int e= (n*m)-1;
        
        while(e >= s){
            int mid = (s+e)/2;
            if(target > matrix[mid/m][mid%m]){
               s = mid+1;
            }else if(target == matrix[mid/m][mid%m]){
                return true;
            }
            else {
                e = mid-1;
            }
        }
        return false;
    }
};