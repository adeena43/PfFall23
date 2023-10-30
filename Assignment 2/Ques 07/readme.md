Function main():
    Declare integer variables i, j, a
    Print "Enter Number of shirts:"
    Read a

    Declare a 2D integer array 'arr' with 'a' rows and 2 columns

    For i from 0 to (a - 1):
        Print "Enter age for shirt ", i + 1
        Read arr[i][0]  // Input the age for the ith shirt
        Print "Enter price for shirt ", i + 1
        Read arr[i][1]  // Input the price for the ith shirt

    // Sort shirts by age in ascending order
    For i from 0 to (a - 1):
        For j from (i + 1) to (a - 1):
            If arr[i][0] > arr[j][0]:
                Swap arr[i] and arr[j]  // Swap the entries for age and price

    // Sort shirts by price in descending order
    For i from 0 to (a - 1):
        For j from (i + 1) to (a - 1):
            If arr[i][1] < arr[j][1]:
                Swap arr[i] and arr[j]  // Swap the entries for age and price

    // Print the sorted shirts
    For i from 0 to (a - 1):
        Print arr[i][0], "\t", arr[i][1]

End of Function
