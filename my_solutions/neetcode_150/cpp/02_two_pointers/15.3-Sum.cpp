#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    vector<vector<int>> threeSum(vector<int> &nums)
    {
        unordered_map<int, int> umap;

        int n = nums.size();

        vector<vector<int>> ans;

        sort(nums.begin(), nums.end());

        for (int i = 0; i < n - 2; i++)
        {

            if (i > 0 && nums[i - 1] == nums[i])
            {
                continue;
            }
            int target = nums[i] * -1;

            int left = i + 1;
            int right = n - 1;

            while (left < right)
            {
                int sum = nums[left] + nums[right];
                if (sum == target)
                {
                    vector<int> v{nums[i], nums[left], nums[right]};

                    ans.push_back(v);

                    while (left < right && nums[left] == nums[left + 1]) {
                        left++;
                    }
                    while (left < right && nums[right] == nums[right - 1]) {
                        right--;
                    }
                    left++;
                    right--;
                }
                else if (sum < target)
                {
                    left++;
                }
                else
                {
                    right--;
                }
            }
        }

        return ans;
    }
};

int main(int argc, char const *argv[])
{
    vector v{-2, 0, 1, 1, 2};
    // -2, 0, 1, 1, 2

    // 0 , 0, 0, 0
    // *   l     r
    //   , *, l, r

    // [-1,0,1,2,-1,-4]
    // -4, -1, -1, 0, 1, 2
    // [-2,0,0,2,2]
    // -2, 0, 0, 2, 2
    //  *, l,  ,  , r
    Solution sol;
    sol.threeSum(v);
    return 0;
}