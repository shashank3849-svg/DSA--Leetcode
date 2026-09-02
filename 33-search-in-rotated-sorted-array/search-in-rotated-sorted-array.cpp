//SHASHANK TRIPATHI
// SEARCH IN ROTATED SORTED ARRAY, 02-09-2026

class Solution {
public:
    int search(vector<int>& vec, int target) {
        int low = 0;
        int high = vec.size() - 1;

        while (low <= high) {

            int mid = low + (high - low) / 2;

           
            if (vec[mid] == target) {
                return mid;
            }

            
            if (vec[low] <= vec[mid]) {

                
                if (vec[low] <= target && target < vec[mid]) {
                    high = mid - 1;
                }
                else {
                    low = mid + 1;
                }
            }

            
            else {

                
                if (vec[mid] < target && target <= vec[high]) {
                    low = mid + 1;
                }
                else {
                    high = mid - 1;
                }
            }
        }

        return -1;
    }
};