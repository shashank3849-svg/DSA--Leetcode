// BY SHASHANK
// COTAINER WITH MOST WATER, 26-08-2026
class Solution {
public:
    int maxArea(vector<int>& height) {
        long long n = height.size();
        long long low = 0;
        
        long long high = n-1;
        long long area = 0;
        while (low<high){
            long long now = min(height[low],height[high])* (high - low);
            area = max(area, now);

            if(height[low]<height[high]){
                low++;
            }
            else{
                high--;
            }
        }

        
        return area;
    }
};