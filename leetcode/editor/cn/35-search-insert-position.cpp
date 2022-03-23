#include "include/headers.h"
#include "gtest/gtest.h"

using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int pos = 0;
        for (std::vector<int>::iterator it = nums.begin(); it != nums.end(); it++) {
            if (*it > target) {
                return pos--;
            } else if (*it == target) {
                return pos;
            } else {
                pos++;
            }
        }
        return pos;
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

TEST(SearchInsertPosition, 35) {
    Solution s;
    vector<int> data{1,3,5,6};
    int target = 5;
    int res = s.searchInsert(data, target);
    EXPECT_EQ(res, 2);
}

TEST(SearchInsertPosition, 35_2) {
    Solution s;
    vector<int> data{1,3,5,6};
    int target = 2;
    int res = s.searchInsert(data, target);
    EXPECT_EQ(res, 1);
}

TEST(SearchInsertPosition, 35_3) {
    Solution s;
    vector<int> data{1,3,5,6};
    int target = 7;
    int res = s.searchInsert(data, target);
    EXPECT_EQ(res, 4);
}

TEST(SearchInsertPosition, 35_4) {
    Solution s;
    vector<int> data{1,3,5,6};
    int target = 0;
    int res = s.searchInsert(data, target);
    EXPECT_EQ(res, 0);
}

TEST(SearchInsertPosition, 35_5) {
    Solution s;
    vector<int> data{1};
    int target = 0;
    int res = s.searchInsert(data, target);
    EXPECT_EQ(res, 0);
}