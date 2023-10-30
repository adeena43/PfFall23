//pseudocode for question 01
1. Input the number of batsmen (a)
2. Input the number of innings (b)
3. Initialize an empty 2D array 'arr' with dimensions [a][b]
4. For i from 0 to (a-1):
   a. For j from 0 to (b-1):
      i. Prompt the user to enter the score for [i+1] batsman in inning [j+1]
      ii. Read and store the score in 'arr[i][j]'
5. For i from 0 to (a-1):
   a. Initialize 'total' to 0
   b. For j from 0 to (b-1):
      i. Add 'arr[i][j]' to 'total'
   c. Calculate and display the total runs scored by [i+1] batsman
   d. Calculate and display the average runs per inning for [i+1] batsman (total/b)
6. Initialize 'century' to 0
   Initialize 'halfcentury' to 0
7. For i from 0 to (a-1):
   a. Initialize 'highestscore' to 'arr[i][0]'
   b. For j from 0 to (b-1):
      i. If 'highestscore' is less than 'arr[i][j]', set 'highestscore' to 'arr[i][j]'
      ii. If 'arr[i][j]' is greater than or equal to 100, increment 'century' by 1
      iii. If 'arr[i][j]' is greater than 49 and less than 100, increment 'halfcentury' by 1
   c. Display the highest score scored by [i+1] batsman
   d. Display the number of centuries scored by [i+1] batsman
   e. Display the number of half-centuries scored by [i+1] batsman
