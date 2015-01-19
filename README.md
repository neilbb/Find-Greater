# Find-Greater

Implementation of an algorithm that prints all the integers in a Max-Heap that are greater or equal to n. 
Complexity: O(k), where k is the number of integers greater than or equal to n.

### Building
``` bash
$ g++ findgreater.cpp -o findgreater
```
### Instructions

  findgreater reads from stdin the size of max-heap followed by the integers in the max-heap and then the integer n.

### Example:
```

             10 
           /    \
         8        7
       /  \
      2    1 

```
### Input:
``` 
5
10
8
7
2
1
8
```
### Output:
```
10
8
```

### Notes
The heap is implemented as an array A[0... n - 1] of integers. 
