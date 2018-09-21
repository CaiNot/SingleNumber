#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

class Solution {
public:
    int singleNumber(vector<int> &nums) {
        sort(nums.begin(), nums.end());

        for (int i = 0; i < nums.size() - 1; i++) {
            if (nums[i] == nums[i + 1]) {
                i++;
            } else return nums[i];
        }

        return nums[nums.size() - 1];
    }

    int betterSingleNumber(vector<int> &nums) {
        /**
         * 跪在地上膜拜这个算法:
         * a^a=0;   0^c=c;  c^0=c;
         */
        int result = 0;
        if (nums.empty())
            return -1;
        for (int i = 0; i < nums.size(); ++i) {
            result ^= nums[i];
        }
        return result;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    vector<int> nums = {4, 1, 2, 1, 2};
    Solution s;
    cout << s.betterSingleNumber(nums) << endl;
    return 0;
}