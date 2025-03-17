<div align="center">
  <img height="150" src="https://www.tutorialspoint.com/data_structures_algorithms/images/linear_search.gif"  />
</div>

###

<h1 align="center">C  C++ DSA  Algorithms</h1>
 
###

**Algorithm Complexities - Notes**

## **Algorithm Complexity Table**
<h6> 
  
| **Algorithm Type** | **Algorithm**       | **Best Case** | **Average Case** | **Worst Case** | **Space Complexity** |
|--------------------|---------------------|--------------|----------------|--------------|----------------|
| **Searching**      | Linear Search       | O(1)         | O(n)           | O(n)         | O(1)           |
|                    | Binary Search       | O(1)         | O(log n)       | O(log n)     | O(1)           |
| **Sorting**        | Bubble Sort         | O(n)         | O(n²)          | O(n²)        | O(1)           |
|                    | Selection Sort      | O(n²)        | O(n²)          | O(n²)        | O(1)           |
|                    | Insertion Sort      | O(n)         | O(n²)          | O(n²)        | O(1)           |
|                    | Merge Sort          | O(n log n)   | O(n log n)     | O(n log n)   | O(n)           |
|                    | Quick Sort          | O(n log n)   | O(n log n)     | O(n²)        | O(log n)       |
|                    | Heap Sort           | O(n log n)   | O(n log n)     | O(n log n)   | O(1)           |
|                    | Counting Sort       | O(n + k)     | O(n + k)       | O(n + k)     | O(k)           |
|                    | Radix Sort          | O(nk)        | O(nk)          | O(nk)        | O(n + k)       |
|                    | Bucket Sort         | O(n + k)     | O(n + k)       | O(n²)        | O(n)           |
| **Graph**          | BFS (Adj. List)     | O(V + E)     | O(V + E)       | O(V + E)     | O(V)           |
|                    | DFS (Adj. List)     | O(V + E)     | O(V + E)       | O(V + E)     | O(V)           |
|                    | Dijkstra (Heap)     | O((V + E) log V) | O((V + E) log V) | O((V + E) log V) | O(V + E)       |
|                    | Bellman-Ford        | O(VE)        | O(VE)          | O(VE)        | O(V)           |
|                    | Floyd-Warshall      | O(n³)        | O(n³)          | O(n³)        | O(n²)          |
|                    | Kruskal’s Algorithm | O(E log E)   | O(E log E)     | O(E log E)   | O(E + V)       |
|                    | Prim’s Algorithm    | O((V + E) log V) | O((V + E) log V) | O((V + E) log V) | O(V²) or O(E + V) with heap |

</h6>


---

### **Conclusion**
Understanding time and space complexity is crucial for optimizing algorithms. Always consider the input size and constraints to choose the most efficient algorithm. 

Let me know if you need any modifications or explanations! 🚀


## Algorithm and Data Structure (DSA) - Study Guide

<h6> 

## Content
1. [অ্যালগরিদম বিশ্লেষণ](#অ্যালগরিদম-বিশ্লেষণ-algorithm-analysis)
2. [সার্চিং অ্যালগরিদম](#সার্চিং-অ্যালগরিদম-searching-algorithms)
3. [সর্টিং অ্যালগরিদম](#সর্টিং-অ্যালগরিদম-sorting-algorithms)
4. [গ্রাফ অ্যালগরিদম](#গ্রাফ-অ্যালগরিদম-graph-algorithms)
5. [গ্রিডি অ্যালগরিদম](#গ্রিডি-অ্যালগরিদম-greedy-algorithms)
6. [ডায়নামিক প্রোগ্রামিং](#ডায়নামিক-প্রোগ্রামিং-dynamic-programming)
7. [ডিভাইড অ্যান্ড কনকোয়ার](#ডিভাইড-অ্যান্ড-কনকোয়ার-divide-and-conquer)
8. [ব্যাকট্র্যাকিং](#ব্যাকট্র্যাকিং-backtracking)
9. [বিট ম্যানিপুলেশন](#বিট-ম্যানিপুলেশন-bit-manipulation)
10. [উন্নত ডাটা স্ট্রাকচার](#উন্নত-ডাটা-স্ট্রাকচার-advanced-data-structures)
11. [স্ট্রিং অ্যালগরিদম](#স্ট্রিং-অ্যালগরিদম-string-algorithms)
12. [কম্পিউটেশনাল জিওমেট্রি](#কম্পিউটেশনাল-জিওমেট্রি-computational-geometry)

</h6>
---

### অ্যালগরিদম বিশ্লেষণ (Algorithm Analysis)

- **টাইম কমপ্লেক্সিটি**: অ্যালগরিদমের রান টাইম নির্ধারণ করার জন্য ব্যবহৃত হয়। এটি **Big-O**, **Big-Ω**, এবং **Big-Θ** দ্বারা প্রকাশ করা হয়।
- **স্পেস কমপ্লেক্সিটি**: মেমোরি ব্যবহারের পরিমাণ বোঝায়।
- **বেস্ট, এভারেজ**, ওয়ার্স্ট কেস: ইনপুট ভেদে অ্যালগরিদমের পারফরমেন্স কেমন হবে তা বিশ্লেষণ করা হয়।
- **Amortized Analysis**: কিছু অপারেশনের গড় কমপ্লেক্সিটি নির্ধারণ করা।

---

### সার্চিং অ্যালগরিদম (Searching Algorithms)

- **Linear Search**: ***`O(n)`*** – একটি এলিমেন্ট খোঁজার জন্য পুরো লিস্টের প্রতিটি আইটেম পরীক্ষা করা হয়।
- **Binary Search**: ***`O(log n)`*** – ইনপুট লিস্ট যদি সর্টেড থাকে তবে বাইনারি সার্চ এলিমেন্ট খোঁজার জন্য দ্রুততর পদ্ধতি।
- **Ternary Search**: ***`O(log n)`*** – তিন ভাগে ভাগ করে অনুসন্ধান করা হয়।
- **Interpolation Search**: ***`O(log log n)`*** – Binary Search এর উন্নত সংস্করণ।
- **Exponential Search**: ***`O(log n)`*** – এলিমেন্টের অবস্থান অজানা হলে এটি ব্যবহার হয়।

---

### সর্টিং অ্যালগরিদম (Sorting Algorithms)

- **Bubble Sort**: ***`O(n^2)`*** – একের পর এক সন্নিবেশিত উপাদানগুলো তুলনা করে সর্ট করা হয়।
- **Selection Sort**: ***`O(n^2)`*** – একটি ছোটতম উপাদানকে নির্বাচন করে সেটি সঠিক স্থানে রাখার পদ্ধতি।
- **Insertion Sort**: ***`O(n^2)`*** – এলিমেন্টগুলিকে একটি একটি করে ইনসার্ট করে ইনপুট অ্যারে সর্ট করা হয়।
- **Merge Sort**: ***`O(n log n)`*** – বিভাজন এবং জয়েনিং পদ্ধতি ব্যবহার করে এলিমেন্ট সাজানো হয়।
- **Quick Sort**: ***`O(n log n)`*** – পিভট এলিমেন্ট ব্যবহার করে দ্রুত সর্টিং পদ্ধতি।
- **Heap Sort**: ***`O(n log n)`*** – একটি হিপ ডাটা স্ট্রাকচার ব্যবহার করে এলিমেন্ট সর্ট করা হয়।

---

### গ্রাফ অ্যালগরিদম (Graph Algorithms)

- **DFS (Depth First Search)**: একটি গ্রাফের মধ্যে গভীরতার ভিত্তিতে অনুসন্ধান করা হয়।
- **BFS (Breadth First Search)**: একটি গ্রাফের মধ্যে প্রস্থের ভিত্তিতে অনুসন্ধান করা হয়।
- **Dijkstra's Algorithm**: সর্বনিম্ন দূরত্বের পথে যাওয়ার জন্য ব্যবহৃত অ্যালগরিদম।
- **Bellman-Ford Algorithm**: নেতিবাচক ওয়েট সহ সর্বনিম্ন পথ নির্ধারণের জন্য ব্যবহৃত হয়।
- **Floyd-Warshall Algorithm**: সমস্ত দম্পতি নোডের মধ্যে সর্বনিম্ন পথ খোঁজার জন্য ব্যবহৃত হয়।

---

### গ্রিডি অ্যালগরিদম (Greedy Algorithms)

- **Activity Selection Problem**: নির্বাচিত কর্মকাণ্ডের জন্য সর্বাধিক সময়ে কাজে লাগানোর কৌশল।
- **Huffman Coding**: ডাটা সংকোচন পদ্ধতি যেখানে হাফম্যান ট্রি ব্যবহার করা হয়।
- **Fractional Knapsack**: পণ্যের ভর অনুযায়ী সর্বাধিক লাভ অর্জন করতে গ্রিডি পদ্ধতি ব্যবহৃত হয়।
- **Prim's Algorithm**: মিনিমাম স্প্যানিং ট্রি তৈরি করার জন্য ব্যবহৃত।

---

### ডায়নামিক প্রোগ্রামিং (Dynamic Programming)

- **Fibonacci Sequence**: **O(n)** সময়ের মধ্যে ফিবোনাচ্চি সিরিজ বের করা।
- **Knapsack Problem**: একটি বস্তু নির্বাচন করার জন্য সর্বাধিক মূল্য নির্ধারণ করতে ব্যবহৃত হয়।
- **Longest Common Subsequence**: দুটি স্ট্রিংয়ের মধ্যে সবচেয়ে বড় সাধারণ সাবসিকোয়েন্স নির্ধারণ করা।
- **Longest Increasing Subsequence**: একধাপ বাড়ানো উপাদানগুলোর মধ্যে সবচেয়ে বড় উপসেট বের করা।

---

### ডিভাইড অ্যান্ড কনকোয়ার (Divide and Conquer)

- **Merge Sort**: উপরের মতো, ডিভাইড অ্যান্ড কনকোয়ার পদ্ধতি ব্যবহার করে সর্টিং অ্যালগরিদম।
- **Quick Sort**: ইনপুট ডাটা ভাগ করে দ্রুত সর্টিং করার জন্য ব্যবহৃত।
- **Binary Search**: ইনপুট ডাটা ভাগ করে দ্রুত অনুসন্ধান করা হয়।

---

### ব্যাকট্র্যাকিং (Backtracking)

- **N-Queens Problem**: একটি এন-কুয়িন্সের সমস্যা সমাধান করা যেখানে কুইনদের পরস্পরকে আক্রমণ না করে বসানো হয়।
- **Subset Sum Problem**: একটি সাবসেট খোঁজা যা একটি নির্দিষ্ট সংখ্যা যোগফল তৈরি করে।
- **Sudoku Solver**: একটি সুদোকু সমস্যা সমাধান করা।

---

### বিট ম্যানিপুলেশন (Bit Manipulation)

- **Bitwise AND, OR, XOR**: বিটওয়াইজ অপারেশন করার পদ্ধতি।
- **Checking if a number is power of 2**: একটি সংখ্যা ২ এর শক্তি কিনা তা চেক করা।
- **Counting set bits**: একটি সংখ্যার সেট বিট গণনা করা।

---

### উন্নত ডাটা স্ট্রাকচার (Advanced Data Structures)

- **Trie**: একটি ট্রি ডাটা স্ট্রাকচার যা স্ট্রিং অনুসন্ধানে ব্যবহৃত হয়।
- **Segment Tree**: একটি অ্যারে পরিসরের জন্য দ্রুত কুইরি এবং আপডেট অপারেশন করার জন্য ব্যবহৃত হয়।
- **Fenwick Tree (Binary Indexed Tree)**: একটি ডাটা স্ট্রাকচার যা কুইরি ও আপডেট অপারেশন কার্যকরভাবে সম্পাদন করতে ব্যবহৃত হয়।
- **Disjoint Set (Union-Find)**: একটি ডাটা স্ট্রাকচার যা উপাদানগুলোকে সমিতি বা ক্লাসে ভাগ করতে ব্যবহৃত হয়।

---

### স্ট্রিং অ্যালগরিদম (String Algorithms)

- **Naive Pattern Searching**: একটি স্ট্রিংয়ের মধ্যে প্যাটার্ন খোঁজার সাধারণ পদ্ধতি।
- **KMP (Knuth-Morris-Pratt)**: দ্রুত প্যাটার্ন অনুসন্ধানের জন্য একটি উন্নত পদ্ধতি।
- **Rabin-Karp**: হ্যাশিং ব্যবহার করে স্ট্রিং প্যাটার্ন অনুসন্ধান করা।
- **Z Algorithm**: স্ট্রিং প্যাটার্ন খোঁজার জন্য একটি শক্তিশালী অ্যালগরিদম।

---

### কম্পিউটেশনাল জিওমেট্রি (Computational Geometry)

- **Convex Hull**: একটি সন্নিবেশিত পয়েন্টসের মধ্যে সর্বনিম্ন আকারের বাউন্ডিং হাল্ল তৈরি করা।
- **Line Intersection**: দুটি লাইন একে অপরকে ছেদ করে কিনা তা যাচাই করা।
- **Point in Polygon**: একটি পয়েন্ট একটি বহুপদী (polygon) এর মধ্যে অবস্থিত কিনা তা পরীক্ষা করা।

---
 
