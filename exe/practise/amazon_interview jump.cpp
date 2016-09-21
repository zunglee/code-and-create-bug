magine you have an array B where B[i] 
shows the minimum number of step needed to
 reach index i in your array A. Your answer of course is in B[n],
  given A has n elements and indices start from 1. Assume C[i]=j 
  means the you jumped from index j to index i (this is to recover
   the path taken later)

So, the algorithm is the following:

set B[i] to infinity for all i
B[1] = 0;                    <-- zero steps to reach B[1]
for i = 1 to n-1             <-- Each step updates possible jumps from A[i]
    for j = 1 to A[i]        <-- Possible jump sizes are 1, 2, ..., A[i]
        if i+j > n           <-- Array boundary check
            break
        if B[i+j] > B[i]+1   <-- If this path to B[i+j] was shorter than previous
            B[i+j] = B[i]+1  <-- Keep the shortest path value
            C[i+j] = i       <-- Keep the path itself
