cmake_minimum_required(VERSION 3.9)
project(LeetCode)
set(CMAKE_CXX_STANDARD 11)

# 指定头文件搜索路径
# 链接库
aux_source_directory(leetcode/editor/cn/include LEETCODE)
add_library(leetcode ${LEETCODE})
LINK_LIBRARIES(leetcode)

## 指定lib目录
link_directories(leetcode/editor/cn/lib/)
## 引入头文件
include_directories(leetcode/editor/cn/include/)
# 添加上库文件的路径，注意相对路径
#link_directories(../googletest/cmake-build-debug/lib/)
# 引入头文件
#include_directories(../googletest/googletest/include/)
# 链接gtest库文件
#target_link_libraries(LeetCode libgtest.a)
link_libraries(libgtest.a)

add_executable(1-two-sum leetcode/editor/cn/1-two-sum.cpp)
add_executable(100-same-tree leetcode/editor/cn/100-same-tree.cpp)
add_executable(27-remove-element leetcode/editor/cn/27-remove-element.cpp)
add_executable(26-remove-duplicates-from-sorted-array leetcode/editor/cn/26-remove-duplicates-from-sorted-array.cpp)
add_executable(35-search-insert-position leetcode/editor/cn/35-search-insert-position.cpp)
add_executable(53-maximum-subarray leetcode/editor/cn/53-maximum-subarray.cpp)
add_executable(2-add-two-numbers leetcode/editor/cn/2-add-two-numbers.cpp)
add_executable(167-two-sum-II leetcode/editor/cn/167-two-sum-II.cpp)