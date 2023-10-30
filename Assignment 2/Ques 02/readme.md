//pseudocode for the code of question 02
Function min(a, b, c):
    smallest = a
    If b < smallest:
        smallest = b
    If c < smallest:
        smallest = c
    Return smallest

Function findLargestSquareSubmatrix(matrix, rows, cols):
    Declare an array dp[rows][cols]
    max = 0
    max_i = 0
    max_j = 0

    For i from 0 to rows - 1:
        dp[i][0] = matrix[i][0]
        If matrix[i][0] is 1:
            max = 1
            max_i = i
            max_j = 0

    For j from 0 to cols - 1:
        dp[0][j] = matrix[0][j]
        If matrix[0][j] is 1:
            max = 1
            max_i = 0
            max_j = j

    For i from 1 to rows - 1:
        For j from 1 to cols - 1:
            If matrix[i][j] is 1:
                dp[i][j] = 1 + min(dp[i - 1][j], dp[i][j - 1], dp[i - 1][j - 1])
                If dp[i][j] > max:
                    max = dp[i][j]
                    max_i = i
                    max_j = j
            Else:
                dp[i][j] = 0

    Print "Row and Column numbers for 1s in the largest square submatrix:"
    For i from max_i to max_i - max + 1, decreasing:
        For j from max_j to max_j - max + 1, decreasing:
            If matrix[i][j] is 1:
                Print "(", i, ",", j, ")"

Function main():
    Declare matrix[100][100]
    Declare rows, cols

    Print "Enter the number of rows and columns:"
    Input rows, cols

    Print "Enter the elements of the binary matrix (0 or 1):"
    For i from 0 to rows - 1:
        For j from 0 to cols - 1:
            Input matrix[i][j]

    Print "The matrix you entered is as following:"
    For i from 0 to rows - 1:
        For j from 0 to cols - 1:
            Print matrix[i][j], TAB
        Print NewLine

    Call findLargestSquareSubmatrix(matrix, rows, cols)
