/*
*Programmer:Adina
*Date:10October2023
*Description: Junaid wants to keep track of all mobile phone bills in his X company branches. Let Y be the number
of company mobile phones in each branch. Create a 2D array for bill amount, where keep track of
branch ID in row subscript, mobile phone IDs in column subscript. Ask users to enter a bill for all mobile
phones in all branches. Your program should print the following:
- Total bill for all branches
- Total bill for each branch
- Branch ID where maximum bill arrived
- Branch and Mobile Phone IDs where bill is highest of all mobile phones.
*/
#include<stdio.h>

int main()
{
	 int X; // Number of company branches
    int Y; // Number of company mobile phones in each branch

    // Prompt the user to enter the number of branches and mobile phones
    printf("Enter the number of branches (X): ");
    scanf("%d", &X);
    printf("Enter the number of mobile phones per branch (Y): ");
    scanf("%d", &Y);

    // Create a 2D array for bill amounts with dimensions X (branches) and Y (mobile phones)
    double bills[X][Y];

    // Initialize variables for total bill, maximum bill, and their corresponding indices
    double totalBill = 0.0;
    double maxBill = 0.0;
    int maxBillBranchID = -1;
    int maxBillMobileID = -1;
	int branch;
	int mobile;
    // Input bills for each branch and mobile phone
    for (branch = 0; branch < X; branch++) {
        printf("Enter bills for branch %d:\n", branch);
        for (mobile = 0; mobile < Y; mobile++) {
            printf("Enter bill for mobile phone %d: ", mobile);
            scanf("%lf", &bills[branch][mobile]);
            totalBill += bills[branch][mobile]; // Update the total bill

            // Check for the maximum bill
            if (bills[branch][mobile] > maxBill) {
                maxBill = bills[branch][mobile];
                maxBillBranchID = branch;
                maxBillMobileID = mobile;
            }
        }
    }

    // Print the total bill for all branches
    printf("Total bill for all branches: %.2lf\n", totalBill);

    // Print the total bill for each branch
    printf("Total bill for each branch:\n");
    for (branch = 0; branch < X; branch++) {
        double branchTotal = 0.0;
        for (mobile = 0; mobile < Y; mobile++) {
            branchTotal += bills[branch][mobile];
        }
        printf("Branch %d: %.2lf\n", branch, branchTotal);
    }

    // Print the branch ID where the maximum bill arrived
    printf("Branch ID where maximum bill arrived: %d\n", maxBillBranchID);

    // Print the branch and mobile phone IDs with the highest bill
    printf("Branch and Mobile Phone IDs with the highest bill:\n");
    printf("Branch: %d\n", maxBillBranchID);
    printf("Mobile Phone: %d\n", maxBillMobileID);

    return 0;

	
}
