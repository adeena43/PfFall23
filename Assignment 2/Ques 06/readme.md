1. Prompt the user for the size of the array (n).
2. Create an array 'arr' of size n.
3. Initialize variables 'i' and 'j'.
4. Prompt the user for a target integer (targetInt).
5. Initialize 'i' to 0.

6. Repeat the following steps for 'i' from 0 to n - 1:
   7. If arr[i] is equal to -1, exit the loop.
   8. Else, repeat the following steps for 'j' from 'i' to n - 1:
      9. Calculate the sum 'sum' as arr[i] + arr[j].
      10. If 'sum' is equal to 'targetInt', do the following:
          11. Print the pair (arr[i], arr[j]).
          12. Set arr[i] to -1 to mark it as used.
          13. Set arr[j] to -1 to mark it as used.

14. End of the program.
