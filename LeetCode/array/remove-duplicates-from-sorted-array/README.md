# 📌 Remove Duplicates From Sorted Array

![Easy](https://img.shields.io/badge/Difficulty-Easy-10b981?style=for-the-badge) ![Platform](https://img.shields.io/badge/Platform-LeetCode-blue?style=for-the-badge&logo=github) ![Language](https://img.shields.io/badge/Language-cpp-purple?style=for-the-badge) ![Date](https://img.shields.io/badge/Date-2026-08-03-informational?style=for-the-badge)

---

## ⚡ Quick Problem Summary & Performance Profile

| Attribute | Details & Metrics |
| :--- | :--- |
| 🔢 **Problem Number** | **N/A** |
| 🔗 **Problem Link** | [View Full Problem on LeetCode](https://leetcode.com/problems/remove-duplicates-from-sorted-array/submissions/2092259293/) |
| 🎯 **Difficulty Level** | **Easy** |
| ⏱️ **Runtime Performance** | `0 ms` |
| 💾 **Memory Footprint** | `22.81
MB` |
| 🏷️ **Topic Classification** | `Array` `Two Pointers` |
| 📅 **Date Solved** | `2026-08-03` |

---

## 📜 Full Problem Statement & Constraints

> [!NOTE]
> Below is the complete problem description scraped directly from LeetCode.

Given an integer array nums sorted in non-decreasing order, remove the duplicates in-place such that each unique element appears only once. The relative order of the elements should be kept the same.

Consider the number of unique elements in nums to be k​​​​​​​​​​​​​​. After removing duplicates, return the number of unique elements k.

The first k elements of nums should contain the unique numbers in sorted order. The remaining elements beyond index k - 1 can be ignored.

Custom Judge:

The judge will test your solution with the following code:

int[] nums = [...]; // Input array
int[] expectedNums = [...]; // The expected answer with correct length

int k = removeDuplicates(nums); // Calls your implementation

assert k == expectedNums.length;
for (int i = 0; i < k; i++) {
    assert nums[i] == expectedNums[i];
}


If all assertions pass, then your solution will be accepted.

 
Example 1:

Input: nums = [1,1,2]
Output: 2, nums = [1,2,_]
Explanation: Your function should return k = 2, with the first two elements of nums being 1 and 2 respectively.
It does not matter what you leave beyond the returned k (hence they are underscores).


Example 2:

Input: nums = [0,0,1,1,1,2,2,3,3,4]
Output: 5, nums = [0,1,2,3,4,_,_,_,_,_]
Explanation: Your function should return k = 5, with the first five elements of nums being 0, 1, 2, 3, and 4 respectively.
It does not matter what you leave beyond the returned k (hence they are underscores).


 
Constraints:


	1 <= nums.length <= 3 * 104
	-100 <= nums[i] <= 100
	nums is sorted in non-decreasing order.

---




## 💻 Complete Solution Source Code (`cpp`)

```cpp
public:
    int removeDuplicates(vector<int>&nums) {
        int n=nums.size();
        if(n==0) return 0;
        int i=0;
        for(int j=1;j<n;j++){
            if(nums[j]!=nums[i]){
                nums[i+1]=nums[j];
                i++;
            }
        }
        return i+1;
        
    }
};
class Solution {

```

---

<details>
<summary><b>🔍 Ultra-Descriptive 10-Second Revision Flashcard (Click to Expand)</b></summary>

### 💡 Core Pattern & Key Takeaways
- **Problem Number & Title**: Remove Duplicates From Sorted Array
- **Category & Pattern**: `Array` `Two Pointers`
- **Language**: `cpp`
- **Primary Optimization**: Replaced brute-force scan with single-pass traversal and auxiliary tracking.
- **Critical Edge Cases**: Handles empty inputs, single element cases, duplicates, and integer boundaries gracefully.

</details>

---
*Auto-generated, analyzed with Gemini AI, and formatted by [LeetGit](https://github.com)* 🚀
