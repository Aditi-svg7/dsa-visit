# Arrays



An array is a collection of elements of the same data type stored in **contiguous memory locations**. Because of this tight memory arrangement, arrays offer incredibly fast access times but come with fixed-size limitations in lower-level languages.

---

##  Core Computer Science Foundations

### 1. The Low-Level Reality
* **Memory Contiguity:** Elements are packed back-to-back in RAM. If the base address of an integer array is `0x100`, the next element sits exactly at `0x104` (assuming a 4-byte integer).
* **Pointer Arithmetic:** In C/C++, the expression `arr[i]` is just syntactic sugar for `*(arr + i)`. 
* **0-Indexing:** The index is actually a **memory offset multiplier**. `arr[0]` means "0 data-widths away from the base pointer," while `arr[3]` means "3 data-widths away."
* **Cache Locality:** Because elements sit next to each other, CPUs can pre-fetch array data into the high-speed L1/L2 cache. Iterating through a sequential array is vastly faster than traversing a linked list scattered across memory.

### 2. Time & Space Complexity

| Operation | Time Complexity | Notes / Caveats |
| :--- | :--- | :--- |
| **Access by Index** | O(1) | Instant lookup via mathematical offset calculation. |
| **Search (Unsorted)** | O(N) | Requires a linear scan from start to finish. |
| **Search (Sorted)** | \(O(\log N)\) | Optimized using Binary Search. |
| **Insertion / Deletion** | O(N) | Requires shifting all subsequent elements in memory. |
| **Space Complexity** | O(N) | Linear space relative to the number of elements allocated. |

---

## ⚡ Essential Algorithmic Patterns

When solving interview problems, most array questions boil down to these foundational patterns:

* **Two Pointers:** Using two scalar indices that move toward each other or at different speeds (e.g., reversing an array, meeting-in-the-middle for sorted pairs).
* **Sliding Window:** Maintaining a sub-array dynamic bounds window to track subarrays matching specific criteria (e.g., maximum sum subarray of size K).
* **Prefix Sum:** Pre-computing a running total array to answer range-sum queries instantly in O(1) time.
* **Kadane’s Algorithm:** A dynamic programming approach used to find the maximum subarray sum in a single O(N) pass.

---



> 💡 **Key Takeaway:** Always check for edge cases such as empty arrays, single-element arrays, and integer overflow risks when adding or multiplying large element bounds.
