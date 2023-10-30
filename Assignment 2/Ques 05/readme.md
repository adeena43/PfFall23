//pseudocode for ques 05
Prompt the user to enter a number and store it in the variable n

FOR i from 1 to n^3 DO
    Set count to 0
    FOR x from 1 to (i-1) DO
        FOR y from x to (i-1) DO
            IF x^3 + y^3 is equal to i THEN
                Increment count by 1
            END IF
        END FOR
    END FOR
    IF count is equal to 2 THEN
        Print i
    END IF
END FOR

##Trace table for 1729(b)
![Ramanujan trace table](https://github.com/adeena43/PfFall23/assets/142868138/87fdb322-986d-4024-b6df-5dc00ff64e4f)
