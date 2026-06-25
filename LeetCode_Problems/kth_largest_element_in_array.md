```cpp
 priority_queue<int ,vector<int>, greater<int>> minHeap;
 //datatype , container , comparator
       for(int num : nums){
        minHeap.push(num);
        if(minHeap.size()> k){
            minHeap.pop();
        }
       }
       return minHeap.top();
```