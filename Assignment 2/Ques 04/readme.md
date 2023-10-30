//pseudocode for question 04
Function traverseMaze(maze):
    x = 0
    path_found = 0
    Print "Output Maze after traversal:"

    For x from 0 to 4:
        For y from path_found to 4:
            If maze[x][y] is 'S' OR maze[x][y] is 'O':
                Print "(", x, ",", y, ") "
            Else If maze[x][y] is 'W':
                path_found = y - 1
                Print NewLine
                Break
            Else If maze[x][y] is 'E':
                Print "(", x, ",", y, ") "
                Print NewLine
            End If
        End For
    End For

Function main():
    Declare a 2D character array maze[5][5]
    Initialize the maze with values

    x = 0
    path_found = 0
    Print "Input Original Maze:"
    For i from 0 to 4:
        For j from 0 to 4:
            Print maze[i][j], " "
        Print NewLine

    Call traverseMaze(maze)
