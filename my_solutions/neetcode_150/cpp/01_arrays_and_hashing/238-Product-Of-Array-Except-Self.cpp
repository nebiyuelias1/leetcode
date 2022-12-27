#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();

        vector<int> prefix {1};
        vector<int> suffix {1};

        for (int i = 0; i < n; i++) {
            int frontNum = nums[i];
            int backNum = nums[n - i - 1];
            prefix.push_back(prefix[i] * frontNum);
            suffix.push_back(suffix[i] * backNum);
        }

        vector<int> ans;

        for (int i = 1; i <= n; i++) {
            int p = prefix[i-1];
            int s = suffix[n-i];
            ans.push_back(p*s);
        }

        return ans;
    }
};

int main(int argc, char const *argv[])
{
    
    return 0;
}