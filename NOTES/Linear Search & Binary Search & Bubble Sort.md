## **Linear Search & Binary Search & Bubble Sort**

### **1. Linear Search**
- **What is Linear Search ?**
  - Linear search is a simple search algorithm where each element of a list is checked one by one. The search starts from the first element and compares it with the target element. If a match is found, the position of the element is returned. If the entire list is searched and the target element is not found, it indicates that the element is not present in the list.

- **Algorithm**:
  - Start from the first element of the array.
  - Compare the target element with the current element.
  - If a match is found, return the index.
  - If the loop ends without finding the target, return a message indicating the target isn't in the array.

- **Time Complexity**:
  - **Best Case**: O(1) — Target is the first element.
  - **Worst Case**: O(n) — Target is the last element or not present.
  - **Average Case**: O(n).

- **Space Complexity**: O(1).

---

### **2. Binary Search**
- **What is Binary Search ?**
  - Binary search is an efficient search method that works only for sorted lists. It repeatedly divides the list into two halves and compares the target element with the middle element. If a match is found, it returns the position. If the target is smaller, the search continues in the left half, and if it is larger, the search continues in the right half. This process continues until the list becomes empty.

- **Algorithm** (Array must be sorted):
  - Divide the array into two halves by finding the middle element.
  - Compare the target element with the middle element:
    - If they match, return the index.
    - If the target is smaller, search in the left half.
    - If the target is larger, search in the right half.
  - Repeat the process until the target is found or the search space becomes empty.

- **Time Complexity**:
  - **Best Case**: O(1) — Target is the middle element.
  - **Worst Case**: O(log n) — Logarithmic reduction in search space.
  - **Average Case**: O(log n).

- **Space Complexity**: O(1) (Iterative), O(log n) (Recursive due to stack calls).

---

### **3. Bubble Sort**
- **What is Bubble Sort ?**
  - Bubble sort is a sorting algorithm that compares adjacent elements in a list and swaps them if they are in the wrong order. With each pass, larger elements "bubble up" to the end of the list. This process continues until the entire list is fully sorted.

- **Algorithm**:
  - Compare adjacent elements in the array.
  - Swap them if they are in the wrong order.
  - Repeat the process for all elements \( n-1 \) times or until no swaps occur in a pass.
  - Larger elements "bubble" to the end with each iteration.

- **Time Complexity**:
  - **Best Case**: O(n) — Array is already sorted.
  - **Worst Case**: O(n<sup>2</sup>) — Array is in reverse order.
  - **Average Case**: O(n<sup>2</sup>).

- **Space Complexity**: O(1).

---

### **Difference Between Linear Search and Binary Search**

| **Feature**           | **Linear Search**                                   | **Binary Search**                                  |
|------------------------|----------------------------------------------------|---------------------------------------------------|
| **Definition**         | A simple search method that sequentially checks each element in the list. | A more efficient search method that repeatedly divides a sorted list into halves. |
| **Pre-requirements**   | The list does not need to be sorted.               | The list must be sorted before performing the search. |
| **Time Complexity**    | O(n) : Time increases linearly with the number of elements. | O(log n) : Time grows logarithmically as the list size increases. |
| **Space Complexity**   | O(1) : No extra space required.               | O(1) (Iterative) or O(log n) (Recursive). |
| **Efficiency**         | Inefficient for large datasets due to linear time complexity. | Highly efficient for large datasets when the list is sorted. |
| **Best Case**          | The target is the first element: O(1).       | The target is the middle element: O(1). |
| **Worst Case**         | Searches through all elements: O(n).         | Logarithmic division until the list is empty: O(log n). |
| **Use Case**           | Works on both sorted and unsorted data.            | Works only on sorted data. |
| **Implementation**     | Easy to implement and does not require preprocessing. | Requires preprocessing (sorting), which can add overhead. |

---

### **Which One Is Better and Why ?**

1. **When Linear Search is Better :**
   - **Unsorted Data**: Linear search is preferable when the list is unsorted, as it does not require preprocessing.
   - **Small Datasets :** For small lists, the simplicity of linear search makes it faster to implement and execute.
   - **Occasional Search :** If searching is infrequent, linear search avoids the overhead of sorting.

2. **When Binary Search is Better :**
   - **Sorted Data :** Binary search is highly efficient for sorted datasets due to its O(log n) time complexity.
   - **Large Datasets :** For large lists, the logarithmic reduction in search space makes binary search significantly faster than linear search.
   - **Repeated Searches :** If multiple searches are to be performed on the same dataset, sorting the list once and using binary search is more efficient.

---

### **Conclusion**  
- **Linear Search :** Best for small, unsorted, or infrequent searches due to its simplicity.  
- **Binary Search :** Best for large datasets and frequent searches on sorted data, where its efficiency outshines linear search.