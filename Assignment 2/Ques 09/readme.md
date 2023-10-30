1. Prompt the user for the size of the matrix (n).

2. Create a 2D array 'arr' of size n x n.

3. Initialize all elements of 'arr' to 0.

4. Initialize 'l' to 0 and 'count' to 1.

5. Repeat the following steps while l is less than or equal to n/2 + n % 2:
   6. For i from l to n - l:
      7. If i is equal to l:
         8. For j from l to n - l:
            9. Set arr[i][j] to 'count'.
            10. Increment 'count' by 1.
      11. If i is greater than l and less than n - 1 - l:
         12. Set arr[i][n - 1 - l] to 'count'.
         13. Increment 'count' by 1.
      14. If i is equal to n - 1 - l and not equal to (n/2 + n % 2) - 1:
         15. For j from n - 1 - l down to l:
            16. Set arr[i][j] to 'count'.
            17. Increment 'count' by 1.
   18. For i from n - 2 - l down to l:
      19. Set arr[i][l] to 'count'.
      20. Increment 'count' by 1.
   21. Increment 'l' by 1.

22. Print the matrix 'arr'.

23. Initialize 'l' to 0 and 'count' to n * n.

24. Reset all elements of 'arr' to 0.

25. Repeat the following steps while l is less than or equal to n/2 + n % 2:
   26. For i from l to n - l:
      27. If i is equal to l:
         28. For j from n - 1 - l down to l:
            29. Set arr[i][j] to 'count'.
            30. Decrement 'count' by 1.
      31. If i is greater than l and less than n - 1 - l:
         32. Set arr[i][l] to 'count'.
         33. Decrement 'count' by 1.
      34. If i is equal to n - 1 - l and not equal to (n/2 + n % 2) - 1:
         35. For j from l to n - l:
            36. Set arr[i][j] to 'count'.
            37. Decrement 'count' by 1.
   38. For i from n - 2 - l down to l:
      39. Set arr[i][n - 1 - l] to 'count'.
      40. Decrement 'count' by 1.
   41. Increment 'l' by 1.

42. Print the matrix 'arr' with the decreasing sequence.

43. End of the program.
