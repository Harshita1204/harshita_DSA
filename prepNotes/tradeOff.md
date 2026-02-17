        TIME - SPACE TRADEOFF

Definition:
Time-Space Tradeoff means using more memory to reduce execution time
or reducing memory usage but increasing execution time.

--------------------------------

1) Basic Idea:
More Space  → Less Time
Less Space  → More Time

--------------------------------

2) Why It Happens?
Because storing extra information helps avoid recomputation.

--------------------------------

3) Example 1: Searching

Linear Search:
Time  = O(n)
Space = O(1)

Hashing:
Time  = O(1)
Space = O(n)

We use extra space to make search faster.

--------------------------------

4) Example 2: Fibonacci

Normal Recursion:
Time  = O(2^n)
Space = O(n)

Using DP (store results):
Time  = O(n)
Space = O(n)

We trade extra space for better time.

--------------------------------

5) Example 3: Text Editor Undo

Store full text every time:
More Space → Easy & Fast Undo

Store only changes:
Less Space → Complex & Slower logic


