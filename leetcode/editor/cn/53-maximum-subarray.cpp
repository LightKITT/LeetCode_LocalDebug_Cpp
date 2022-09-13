#include "include/headers.h"
#include "gtest/gtest.h"

using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int maxSubArray(vector<int>& nums) {

    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main()
{
    ::testing::InitGoogleTest();
    auto res = "Hello LeetCode";
    cout<<res<<endl;
    return RUN_ALL_TESTS();
}

TEST(MaximumSubarray, 53) {
    Solution s;
    vector<int> data{7, 1, 5, 3, 6, 4};
    int res = s.maxSubArray(data);
    EXPECT_EQ(res, 1);
}