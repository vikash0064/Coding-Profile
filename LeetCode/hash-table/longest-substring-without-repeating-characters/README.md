# 📌 Longest Substring Without Repeating Characters

![Medium](https://img.shields.io/badge/Difficulty-Medium-f59e0b?style=for-the-badge) ![Platform](https://img.shields.io/badge/Platform-LeetCode-blue?style=for-the-badge&logo=github) ![Language](https://img.shields.io/badge/Language-cpp-purple?style=for-the-badge) ![Date](https://img.shields.io/badge/Date-2026-07-31-informational?style=for-the-badge)

---

## ⚡ Quick Problem Summary & Performance Profile

| Attribute | Details & Metrics |
| :--- | :--- |
| 🔢 **Problem Number** | **N/A** |
| 🔗 **Problem Link** | [View Full Problem on LeetCode](https://leetcode.com/problems/longest-substring-without-repeating-characters/) |
| 🎯 **Difficulty Level** | **Medium** |
| ⏱️ **Runtime Performance** | `O(N) Optimal Time` |
| 💾 **Memory Footprint** | `O(N) Memory Space` |
| 🏷️ **Topic Classification** | `Hash Table` `String` `Sliding Window` |
| 📅 **Date Solved** | `2026-07-31` |

---

## 📜 Full Problem Statement & Constraints

> [!NOTE]
> Below is the complete problem description scraped directly from LeetCode.

Given a string s, find the length of the longest substring without duplicate characters.

 

Example 1:

Input: s = "abcabcbb"
Output: 3
Explanation: The answer is "abc", with the length of 3. Note that "bca" and "cab" are also correct answers.


Example 2:

Input: s = "bbbbb"
Output: 1
Explanation: The answer is "b", with the length of 1.


Example 3:

Input: s = "pwwkew"
Output: 3
Explanation: The answer is "wke", with the length of 3.
Notice that the answer must be a substring, "pwke" is a subsequence and not a substring.


 

Constraints:

0 <= s.length <= 105
s consists of English letters, digits, symbols and spaces.

---




## 💻 Complete Solution Source Code (`cpp`)

```cpp
class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        unordered_map<char, int> mp;

        int left = 0;
        int ans = 0;

        for (int right = 0; right < s.size(); right++) {

            if (mp.find(s[right]) != mp.end() && mp[s[right]] >= left) {
                
                left = mp[s[right]] + 1;
            }

            mp[s[right]] = right;

            ans = max(ans, right - left + 1);
        }

        return ans;

```

---

<details>
<summary><b>🔍 Ultra-Descriptive 10-Second Revision Flashcard (Click to Expand)</b></summary>

### 💡 Core Pattern & Key Takeaways
- **Problem Number & Title**: Longest Substring Without Repeating Characters
- **Category & Pattern**: `Hash Table` `String` `Sliding Window`
- **Language**: `cpp`
- **Primary Optimization**: Replaced brute-force scan with single-pass traversal and auxiliary tracking.
- **Critical Edge Cases**: Handles empty inputs, single element cases, duplicates, and integer boundaries gracefully.

</details>

---
*Auto-generated, analyzed with Gemini AI, and formatted by [LeetGit](https://github.com)* 🚀
