# Arrays

## Overview
Arrays are one of the most fundamental data structures in programming.  
They store elements in **contiguous memory** and allow **fast access** via indices.  
Problems in this section focus on **traversal, searching, sorting, and manipulation**.

---

## Tips & Tricks / Patterns
- **Two pointers:** Often used for problems involving pairs or subarrays.  
- **Sliding window:** For fixed or variable-size subarrays, sums, maximum/minimum, etc.  
- **Hash maps / sets:** Detect duplicates, frequencies, complements efficiently.  
- **Prefix sums:** Quick range sum queries.  
- **Sorting + greedy:** Sometimes sorting first simplifies a problem.

---

## Problem List (Completed)

| Problem | Difficulty | Language | Time | Space | Approach / Notes |
|---------|-----------|---------|------|-------|-----------------|
| Contains Duplicate | Easy | C | O(n log n) | O(1) | Sort array using `qsort` and check adjacent elements for duplicates. Could also use hash map for O(n) time and O(n) space. |

---
