#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0;
        int right = height.size() - 1;

        int localMaxArea = 0;

        while (left < right) {
            int width = right - left;
            int minHeight = min(height[left], height[right]);
            int area = width * minHeight;
            localMaxArea = max(area, localMaxArea);

            if (height[left] <= height[right]) {
                left++;
            } else {
                right--;
            }
        }

        return localMaxArea;
    }
};

int main(int argc, char const *argv[])
{
    
    return 0;
}