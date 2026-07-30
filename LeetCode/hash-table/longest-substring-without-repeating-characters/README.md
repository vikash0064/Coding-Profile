# 📌 Longest Substring Without Repeating Characters

![Medium](https://img.shields.io/badge/Difficulty-Medium-f59e0b?style=for-the-badge) ![Platform](https://img.shields.io/badge/Platform-LeetCode-blue?style=for-the-badge&logo=github) ![Language](https://img.shields.io/badge/Language-cpp-purple?style=for-the-badge) ![Date](https://img.shields.io/badge/Date-2026-07-30-informational?style=for-the-badge)

---

## ⚡ Quick Problem Summary

| Attribute | Details |
| :--- | :--- |
| 🔗 **Problem Link** | [View Full Problem on LeetCode](https://leetcode.com/problems/longest-substring-without-repeating-characters/) |
| 🎯 **Difficulty** | **Medium** |
| ⏱️ **Runtime** | `N/A` |
| 💾 **Memory Usage** | `N/A` |
| 🏷️ **Topic Tags** | `Hash Table` `String` `Sliding Window` |
| 📅 **Date Solved** | `2026-07-30` |

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

```

---

<details>
<summary><b>🔍 Quick 5-Second Revision Flashcard (Click to Expand)</b></summary>

### 💡 Core Pattern
- **Category:** `Hash Table` `String` `Sliding Window`
- **Language:** `cpp`
- **Key Focus:** Optimal Time Complexity, Boundary Handling, and Integer Overflow Safeguards.

</details>

*Auto-generated, analyzed, and formatted by [LeetGit](https://github.com)* 🚀
