class Solution {
public:
    int maxArea(vector<int>& height) {
        int l = 0; 
        int r = height.size() - 1;

        long long res = 0;
        while(l <= r){
            int width = (r - l);
            int hght = std::min(height[l], height[r]);
            long long area = width * hght;
            res = std::max(res, area);

            if(height[l] < height[r]){
                l++;
            } else{
                r--;
            }
        }
        return res;
    }
};
