# Big O notation and sorting algorithms

This repository is part of the `low-programming` parent repository focused on C programming. Here, I'm starting to learn and work with Big O notation and sorting algorithms to understand their efficiency and practical applications.

Note: I will also update this README.md regarding new concepts I have to learn during these projects.

## Summary

- [Big O notation and sorting algorithms](#big-o-notation-and-sorting-algorithms)
	- [Summary](#summary)
	- [Glossary (in alphabetical order)](#glossary-in-alphabetical-order)
	- [Big O Notation](#big-o-notation)
	- [Time Complexity](#time-complexity)
		- [Key Classes (ranking):](#key-classes-ranking)
	- [Space Complexity](#space-complexity)
		- [Key Classes:](#key-classes)
	- [Sorting Algorithms](#sorting-algorithms)
		- [Insertion Sort](#insertion-sort)
		- [Selection Sort](#selection-sort)
		- [Heapsort](#heapsort)
		- [Merge Sort](#merge-sort)
		- [Quick Sort](#quick-sort)
		- [ShellSort](#shellsort)
		- [Bubble Sort](#bubble-sort)
		- [Comb Sort](#comb-sort)
		- [Counting Sort](#counting-sort)
		- [Bucket Sort](#bucket-sort)
		- [Radix Sort](#radix-sort)
	- [Conclusion](#conclusion)
	- [Author](#author)

## Glossary (in alphabetical order)

**A**

- **Algorithm:** A step-by-step procedure or formula for solving a problem or performing a task.

**B**

- **Big O Notation:** A mathematical notation used to describe the upper bound of an algorithm's time or space complexity as a function of the input size. It provides a high-level understanding of the algorithm's efficiency in the worst-case scenario.

**C**

- **Comparison:** An operation where two elements are evaluated to determine their relative order.

- **Complexity:** A measure of the computational resources (time or space) required by an algorithm as a function of the input size.

**D**

- **Divide and Conquer:** A strategy for solving problems by breaking them into smaller subproblems, solving each subproblem independently, and combining their solutions.

**E**

- **Efficiency:** Refers to how well an algorithm performs in terms of time and space, often analyzed using Big O notation.

**F**

- **Worst-Case Scenario:** The maximum amount of time or space an algorithm requires for the worst possible input of size \( n \).

**G**

- **Gap Sequence:** In ShellSort, a sequence of gaps used to determine which elements to compare and swap.

**H**

- **Heapsort:** A comparison-based sorting algorithm that uses a binary heap data structure to sort elements.

**I**

- **Insertion Sort:** A simple sorting algorithm that builds the final sorted array one item at a time by inserting each element into its correct position.

**J**

- **Jargon:** Specialized terminology used within the field of computer science and algorithms.

**K**

- **Key Operation:** The fundamental operation used by an algorithm, such as comparisons in sorting algorithms.

**L**

- **Logarithmic Time:** Time complexity where the runtime increases logarithmically with the input size, often associated with algorithms that halve the problem size at each step.

**M**

- **Merge Sort:** A divide-and-conquer sorting algorithm that recursively divides the array into halves, sorts each half, and then merges them back together.

**N**

- **N-Log-N Time:** Time complexity where the runtime is proportional to \( n \log n \), common in efficient sorting algorithms like Merge Sort and Quick Sort.

**O**

- **O-Notation:** The notation used to express the upper bound of an algorithm's complexity, indicating its growth rate in terms of input size.

- **Optimized:** Refers to an algorithm or approach that has been improved to perform better in terms of time or space.

**P**

- **Pivot:** An element used in Quick Sort to partition the array into elements less than and greater than the pivot.

**Q**

- **Quadratic Time:** Time complexity where the runtime grows quadratically with the input size, often seen in algorithms with nested loops.

**R**

- **Radix Sort:** A non-comparative sorting algorithm that sorts numbers by processing individual digits, ei
 

## Big O Notation

**Definition:**

**`Big O`** is a way to talk about how fast or slow an algorithm is, especially as the size of the input get bigger.

  1. **Performance or Complexity:** This tell us how an algorithm's speed or memory usage grows when the amount of data it's working with, increases.

  2. **Upper Bound:** **`Big O`** gives us the worst-case scenario. It tells us the maximum time or space the algorithm might need.
  
  3. **Function of Input Size:** It show how the time or space needed changes with the size of the input data.

**Example:** If an algorithm takes more time as the number of items it processes increases, **`Big O`** notation helps us describe how much more time it will need.

In short, **`Big O`** notation helps us understand and compare the efficiency of algorithms especially as the data size grows.

**Why using it?**

As previously said, **`Big O`** notation helps in:

  - Comparing the efficiency of different algorithms.
  - Estimating the performance of algorithms on large datasets.
  - Identifying potenial bottleneck in an algorithm's design.

## Time Complexity

**Definition:**

**Time complexity** measures how the runtim of an algorithm increases with the size of the input. It provides a way to classify algorithms based on their efficiency. Kinda a ranking classement. As we would class a SCP regarding their dangerosity here it's regarding of their efficiency.

### Key Classes (ranking):

  - **`O(1)`: Constant time** – the runtime does **not** change with the `input` size
  - **`O(log n)`: Logarithmic time** – the runtime **spare time** thanks to **skipping** data, and skipping more and more each iterations depending of `input`.
  - **`O(n)`: Linear time** – runtime increases **directly** with `input` size
  - **`O(n log(n)):` Linearrithmic time** – runtime increases with the product of input size and its logarithm
  - **`O(n^2)`: Quadatric time** – runtime grows quadratically with input size.
  - **`O(2^n)`: Exponential time** – runtime multiple by itself for each input (example nested loop)

## Space Complexity

**Definition:**

**Space complexity** measures the amount of memory an algorithm uses relative to the input size.

### Key Classes:

  - **`O(1)`: Constant space** – the memory usage does not change with the input size
  - **`O(n)`: Linear space** – memory usage increases directly with input size
  - **`0(n^2)`: Quadratic space** – memory usage grows quadratically with input size.

## Sorting Algorithms

**Definition:** 

Sorting algorithms arrange data in a specified order. Here's a summary of popular sorting algorithms:

### Insertion Sort

**Definition:**

A simple sorting algorithm that builds the final sorted array one item at a time by inserting elements into their correct position.

  - **Complexity:** **`O(n2)`** (worst-case); **`O(n)`** (best-case, when nearly sorted)
  - **Use:** Efficient for small or nearly sorted dataserts.

### Selection Sort

**Definition:**

A sorting algorithm that repeatedly finds the minimum element from the unsorted portion and moves it to the beginning.

  - **Complexity:** **`O(n2)`**
  - **Use:** Simple and useful when the cost of swapping elements is high.

### Heapsort

**Definition:**

A sorting algorithm that uses a binary heap to sort elements. It extracts the maximum element and rearranges the heap.

  - **Complexity:** **`O(n log n)`** (worst-case and average-case)
  - **Use:** Efficient and reliable, but can be less cache-friendly

### Merge Sort

**Definition:**

A divide-and-conquer sorting algorithm that divides the array into halves, recursively sorts each half, and merges them.

  - **Complexity:** **`O(n log n)`**
  - **Use:** Ideal for large datasts and linked lists; stable and works well with external sorting.

### Quick Sort

**Definition:**

A sorting algorithm that uses a pivot to partition the array into elements less than and greater than the pivot, then recursively sorts the partitions

  - **Complexity:** **`O(n log n)`** on average; **`O(n²)`** in the worst-case.
  - **Use:** Very fast in practice; careful pivot selection helps avoid worst-case performance.

### ShellSort

**Definition:**

An optimized insertion sort that sorts elements that are far apart to reduce the number of inversions.

  - **Complexity:** Ranges from **`O(n²)`** to **`O(n log² n)`** depending on the gap sequence.
  - **Use:** Useful for medium-sized arrays and systems with limited memory.

### Bubble Sort

**Definition:**

A simple sorting algorithm that continuously compares adjacent elements and swaps them if necessary.

  - **Complexity:** **`O(n2)`**
  - **Use:** Mostly for educational purposes; inefficient for large datasets but can be useful for small or nearly sorted lists.

### Comb Sort

**Definition:**

An enhancement of bubble sort that uses a gap sequence to swap elements that are far apart.

  - **Complexity:** Similar to bubble sort in worst case but generally faster
  - **Use:** More efficient than bubble sort in some cases.

### Counting Sort

**Definition:**

A non-comparative sorting algorithm that counts occurrences of each element and arranges them based on these counts.

  - **Complexity:** **`O(n + |S|)`**, where **`|S|`** is the range of input values.
  - **Use:** Efficient when the range of possible values is not much larger than the number of elements.

### Bucket Sort

**Definition:**

A sorting algorithm that distributes elements into buckets and then sorts each bucket.

  - **Complexity:** **`O(n + k)`**, where **`k`** is the number of buckets  
  - **Use:** Effective when data is uniformly distributed.

### Radix Sort

**Definition:**

A non-comparative sorting algorithm that sorts numbers by processing individual digits, either from least significant digit (LSD) or most significant digit (MSD).

  -**Complexity:** **`O(n ⋅ k)`**, where **`k`** is the number of digits

  - **Use:** Efficient for numbers or fixed-length strings.

## Conclusion

Big O notation is crucial for understanding and comparing the efficiency of algorithms, particularly in terms of time and space complexity. Sorting algorithms vary widely in their approach and efficiency, with different algorithms being suited to different types of data and applications. Understanding these concepts is fundamental for optimizing and choosing the right algorithm for a given problem.

## Author

Anne-Cécile Besse (Arc), José Puertas.