#include "include/headers.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        // 定义双指针
        int left = 0;
        int right = numbers.size()-1;

        while (left <= right) {
            int temp = numbers[left] + numbers[right];
            if (temp == target) {
                return vector<int>({left+1, right+1});
            } else if (temp < target) {
                left++;
            } else {
                right--;
            }
        }
        return {};
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main()
{
    Solution s;
    vector<int> data{2,7,11,15};
    auto res = s.twoSum(data,9);
    cout<<res[0]<<endl<<res[1]<<endl;

    sort(data.begin(), data.end());
    unordered_set<int> set = {1,2,3};
    auto iter = set.find(3);
    auto end = set.end();
    if (iter != end) {
        cout << "found " << *iter << endl;
        for (auto i = set.begin(); i != set.end(); i++) {
            cout << *i << endl;
        }
    } else {
        cout << "not found" << endl;
    }
}