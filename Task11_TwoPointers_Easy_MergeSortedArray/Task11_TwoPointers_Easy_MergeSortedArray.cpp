#include <iostream>
#include <vector>

class Solution {
public:
    static void merge(std::vector<int>& nums1, int m, std::vector<int>& nums2, int n) {
        int i = m + n - 1;
        n--;
        m--;
        while (i >= 0) {
            if (m == -1) {
                nums1[i] = nums2[n];
                i--;
                n--;
                continue;
            }
            if (n == -1) {
                break;
            }
            if (nums2[n] >= nums1[m]) {
                nums1[i] = nums2[n];
                i--;
                n--;
            }
            else {
                nums1[i] = nums1[m];
                i--;
                m--;
            }
        }
    }
};

int main()
{
    std::vector<int> nums1 = { 4,5,6,0,0,0 }, nums2 = { 1,2,3 };
    Solution::merge(nums1, 3, nums2, 3);
    for (int i : nums1) {
        std::cout << i << " ";
    }
}