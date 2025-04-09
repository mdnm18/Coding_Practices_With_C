/*
Write a C program to demonstrate the concept of L-value (left-value) and R-value (right-value). The program should perform the following tasks:
1.	Define two integer variables and assign values to them using L-value and R-value expressions.
2.	Demonstrate the use of L-values by performing assignments to variables (show how L-values can appear on the left-hand side of an assignment).
3.	Demonstrate the use of R-values by performing mathematical operations (show how R-values are used in expressions but cannot be assigned to).
4.	Attempt to assign a value to an R-value (such as 10 = x;), and explain why this results in a compilation error.
5.	Use the & operator to display the memory address of an L-value, and explain why the memory address of an R-value cannot be taken.
*/
/
#include <stdio.h>
int main() {
    // 1. Define two integer variables and assign values to them using L-value and R-value expressions.
    int a = 5; // 'a' is an L-value, '5' is an R-value
    int b = 10; // 'b' is an L-value, '10' is an R-value

    // 2. Demonstrate the use of L-values by performing assignments to variables
    a = 15; // 'a' is an L-value and can appear on the left-hand side of an assignment
    b = a + 5; // 'b' is an L-value and can appear on the left-hand side of an assignment

    // 3. Demonstrate the use of R-values by performing mathematical operations
    int sum = a + b; // 'a' and 'b' are L-values, but in this context, they are used as R-values
    int product = a * b; // 'a' and 'b' are L-values, but in this context, they are used as R-values

    // 4. Attempt to assign a value to an R-value (this will result in a compilation error)
    // 10 = a; // Uncommenting this line will cause a compilation error because '10' is an R-value and cannot be assigned to

    // 5. Use the & operator to display the memory address of an L-value
    printf("Address of a: %p\n", (void*)&a); // 'a' is an L-value, so we can take its address
    printf("Address of b: %p\n", (void*)&b); // 'b' is an L-value, so we can take its address

    // Explanation: The memory address of an R-value cannot be taken because R-values do not have a persistent memory location.
    // For example, the expression 'a + b' is an R-value and does not have a memory address.

    return 0;
}

/*
Write a C program to demonstrate the use of both increment (++) and decrement (--) operators, in both their prefix and postfix forms. The program should perform the following tasks:
1.	Define an integer variable and assign an initial value.
2.	Demonstrate the prefix increment (++x) and postfix increment (x++) operators:
o	Display the value of the variable before and after applying the prefix increment.
o	Display the value of the variable before and after applying the postfix increment.
3.	Demonstrate the prefix decrement (--x) and postfix decrement (x--) operators:
o	Display the value of the variable before and after applying the prefix decrement.
o	Display the value of the variable before and after applying the postfix decrement.
4.	Explain the difference between prefix and postfix increments/decrements based on the output.
*/
/*
#include <stdio.h>
int main() {
    // 1. Define an integer variable and assign an initial value.
    int x = 10;
    printf("Initial value of x: %d\n", x);

    // 2. Demonstrate the prefix increment (++x) and postfix increment (x++) operators.
    // Display the value of the variable before and after applying the prefix increment.
    printf("Value of x before prefix increment (++x): %d\n", x);
    printf("Value of x after prefix increment (++x): %d\n", ++x);

    // Display the value of the variable before and after applying the postfix increment.
    printf("Value of x before postfix increment (x++): %d\n", x);
    printf("Value of x after postfix increment (x++): %d\n", x++); // Note: x is incremented after this statement
    printf("Value of x after evaluating postfix increment (x++): %d\n", x);

    // 3. Demonstrate the prefix decrement (--x) and postfix decrement (x--) operators.
    // Display the value of the variable before and after applying the prefix decrement.
    printf("Value of x before prefix decrement (--x): %d\n", x);
    printf("Value of x after prefix decrement (--x): %d\n", --x);

    // Display the value of the variable before and after applying the postfix decrement.
    printf("Value of x before postfix decrement (x--): %d\n", x);
    printf("Value of x after postfix decrement (x--): %d\n", x--); // Note: x is decremented after this statement
    printf("Value of x after evaluating postfix decrement (x--): %d\n", x);

    return 0;
}
*/
/*
Write a C program to perform the following tasks using bitwise left shift (<<) and right shift (>>) operators:
1.	Take an integer input from the user.
2.	Perform a left shift on the integer by 2 positions and display the result. Explain how the left shift operator works in your program.
3.	Perform a right shift on the integer by 2 positions and display the result. Explain how the right shift operator works in your program.
4.	Allow the user to enter the number of positions to shift (left and right) and show the results.
*/
/*
#include <stdio.h>

int main() {
    int num, shift;

    // 1. Take an integer input from the user.
    printf("Enter an integer: ");
    scanf("%d", &num);

    // 2. Perform a left shift on the integer by 2 positions and display the result.
    int leftShiftResult = num << 2;
    printf("Result of left shift by 2 positions: %d\n", leftShiftResult);
    // Explanation: Left shifting by 2 positions is equivalent to multiplying the number by 2^2 (4).
    // For example, if num = 5 (binary 101), left shifting by 2 positions results in 10100 (binary) which is 20.

    // 3. Perform a right shift on the integer by 2 positions and display the result.
    int rightShiftResult = num >> 2;
    printf("Result of right shift by 2 positions: %d\n", rightShiftResult);
    // Explanation: Right shifting by 2 positions is equivalent to dividing the number by 2^2 (4).
    // For example, if num = 20 (binary 10100), right shifting by 2 positions results in 101 (binary) which is 5.

    // 4. Allow the user to enter the number of positions to shift (left and right) and show the results.
    printf("Enter the number of positions to shift: ");
    scanf("%d", &shift);

    int customLeftShiftResult = num << shift;
    int customRightShiftResult = num >> shift;

    printf("Result of left shift by %d positions: %d\n", shift, customLeftShiftResult);
    printf("Result of right shift by %d positions: %d\n", shift, customRightShiftResult);

    return 0;
}
*/














