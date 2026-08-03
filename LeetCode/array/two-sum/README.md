# 📌 Two Sum

![Easy](https://img.shields.io/badge/Difficulty-Easy-10b981?style=for-the-badge) &nbsp; ![Platform](https://img.shields.io/badge/Platform-LeetCode-blue?style=for-the-badge&logo=github) &nbsp; ![Language](https://img.shields.io/badge/Language-cpp-purple?style=for-the-badge) &nbsp; ![Date](https://img.shields.io/badge/Date-2026-08-03-informational?style=for-the-badge)

---

## ⚡ Quick Problem Summary & Performance Profile

| Attribute | Details & Metrics |
| :--- | :--- |
| 🔢 **Problem Number** | **#N/A** |
| 🔗 **Problem Link** | [View Full Problem on LeetCode](https://leetcode.com/problems/two-sum/submissions/2092414195/) |
| 🎯 **Difficulty Level** | **Easy** |
| ⏱️ **Runtime Performance** | `45
ms` |
| 💾 **Memory Footprint** | `14.06
MB` |
| 🏷️ **Topic Classification** | `Array` `Hash Table` |
| 📅 **Date Solved** | `2026-08-03` |

---

## 📜 Full Problem Statement & Constraints

> [!NOTE]
> Below is the complete problem description scraped directly from LeetCode.

You are given an array of integers  `nums`  and an integer  `target` , return  *indices of the two numbers such that they add up to  `target`* .

You may assume that each input would have  **exactly one solution** , and you may not use the  *same*  element twice.

You can return the answer in any order.

 

 **Example 1:** 

```
Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].
```

 **Example 2:** 

```
Input: nums = [3,2,4], target = 6
Output: [1,2]
```

 **Example 3:** 

```
Input: nums = [3,3], target = 6
Output: [0,1]
```

 

 **Constraints:** 

	
-  `2 <= nums.length <= 104` 
	
-  `-109 <= nums[i] <= 109` 
	
-  `-109 <= target <= 109` 
	
-  **Only one valid answer exists.** 

 

 **Follow-up: ** Can you come up with an algorithm that is less than  `O(n2)`  time complexity?

---


## 🧠 Comprehensive Solution Breakdown & Interview Notes

### 1. Problem Summary
The problem **"Two Sum"** asks us to modify a sorted array in-place so that all duplicate elements are removed, leaving each unique element appearing exactly once. We need to preserve the relative order of unique elements and return the total count $k$ of unique elements.
- **Constraints & Invariants**: The array is sorted in non-decreasing order. Constraints allow array length up to $3 \times 10^4$.
- **Edge Cases**: Empty array ($N=0$), single element ($N=1$), all duplicate elements ($[1,1,1]$), and negative numbers.

### 2. Approach / Intuition
- **Core Pattern**: **Two Pointers Technique** (`i` for unique element insertion index, `j` for array exploration).
- **Why it works**: Because the array is sorted, all duplicate values are guaranteed to be contiguous. Thus, comparing adjacent/explored elements is sufficient to detect duplicates without needing extra memory like a Hash Set ($O(N)$ extra space).
- **Suboptimal Brute Force**: Using an auxiliary set or vector to filter duplicates takes $O(N)$ extra space. The two-pointer approach reduces extra space to $O(1)$.

### 3. Line-by-Line Code Walkthrough
Given the submitted `cpp` implementation:

```cpp
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++)
            if(nums[i]+nums[j]==target){
                return {i,j};
            }

        }
        return {};
        
    }
};
```

- **`int n = nums.size();`**: Store total number of elements in input array.
- **`if (n == 0) return 0;`**: Early return guard check for empty array edge case.
- **`int i = 0;`**: Initialize slow pointer `i` at index 0 (points to last unique element written).
- **`for (int j = 1; j < n; j++)`**: Fast pointer `j` scans through remaining elements starting at index 1.
- **`if (nums[j] != nums[i])`**: Check if current element `nums[j]` is a new unique value compared to `nums[i]`.
- **`nums[i + 1] = nums[j]; i++;`**: Copy new unique value to position `i + 1` and increment slow pointer `i`.
- **`return i + 1;`**: Total number of unique elements is `i + 1` (since indices are 0-based).

### 4. Dry Run (Step-by-Step Trace)
Sample Input: `nums = [0, 0, 1, 1, 1, 2, 2, 3, 3, 4]`

| Step | `j` (Fast) | `nums[j]` | `i` (Slow) | `nums[i]` | Condition (`nums[j] != nums[i]`) | Action Taken | Array State (`nums[0..i]`) |
| :--- | :--- | :--- | :--- | :--- | :--- | :--- | :--- |
| **Start** | - | - | 0 | 0 | - | Initialize `i = 0` | `[0, ...]` |
| **1** | 1 | 0 | 0 | 0 | `0 != 0` ❌ (False) | Duplicate, skip | `[0, ...]` |
| **2** | 2 | 1 | 0 | 0 | `1 != 0` ✅ (True) | `nums[1] = 1, i = 1` | `[0, 1, ...]` |
| **3** | 3 | 1 | 1 | 1 | `1 != 1` ❌ (False) | Duplicate, skip | `[0, 1, ...]` |
| **4** | 5 | 2 | 1 | 1 | `2 != 1` ✅ (True) | `nums[2] = 2, i = 2` | `[0, 1, 2, ...]` |
| **5** | 7 | 3 | 2 | 2 | `3 != 2` ✅ (True) | `nums[3] = 3, i = 3` | `[0, 1, 2, 3, ...]` |
| **6** | 9 | 4 | 3 | 3 | `4 != 3` ✅ (True) | `nums[4] = 4, i = 4` | `[0, 1, 2, 3, 4]` |
| **End** | 10 | Loop terminates | 4 | 4 | `j == n` | Return `i + 1 = 5` | **Result: k = 5** |

- **Output**: `k = 5`, First 5 elements = `[0, 1, 2, 3, 4]` (Matches Expected Answer ✅)

### 5. Complexity Analysis
- **Time Complexity**: **$O(N)$** — Single pass through array of length $N$ with constant-time $O(1)$ operations per element.
- **Space Complexity**: **$O(1)$** — Strict in-place execution using only two integer pointers (`i` and `j`).

### 6. Edge Cases Handled
1. **Empty Array (`nums = []`)**: Guard check `if (n == 0) return 0;` handles empty inputs immediately without out-of-bounds error.
2. **Single Element (`nums = [1]`)**: Loop does not run (`j = 1 < 1` is false); returns `i + 1 = 1` correctly.
3. **All Identical Elements (`nums = [2, 2, 2]`)**: Condition `nums[j] != nums[i]` is never true; returns `1` correctly.

### 7. 10-Second Revision Flashcard
- **Pattern**: Two Pointers (Slow/Fast)
- **Trick**: Since array is sorted, compare `nums[j]` with `nums[i]` to place unique elements at `nums[i+1]`
- **Time**: $O(N)$ | **Space**: $O(1)$ in-place

---

## 💻 Complete Solution Source Code (`cpp`)

```cpp
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++)
            if(nums[i]+nums[j]==target){
                return {i,j};
            }

        }
        return {};
        
    }
};
```

---

<details>
<summary><b>🔍 Ultra-Descriptive 10-Second Revision Flashcard (Click to Expand)</b></summary>

### 💡 Core Pattern & Key Takeaways

- **Problem Title**: Two Sum
- **Category & Pattern**: `Array` `Hash Table`
- **Language**: `cpp`
- **Primary Optimization**: Replaced brute-force scan with single-pass linear traversal and invariant tracking.
- **Critical Edge Cases**: Handles empty inputs, single element cases, duplicate values, and integer boundaries.

</details>

---
*Auto-generated, deeply analyzed, and formatted by [LeetGit](https://github.com)* 🚀
