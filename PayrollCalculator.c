// Emily Campa

#include <stdio.h>
int main( void )		

{
	int x;
	int numOfEmployees;
	int empID; 			// employee ID number equal to 7 digits
	float hours; 		// total regular-time hours worked up to 40
	float payRate; 		// hourly pay rate, example: $7.85/hr
	float otHrs; 		// total overtime hours works AFTER 40 regular hours
	float grossPay; 	// employee regular earnings BEFORE taxes
	float otPay; 		// employee OT earnings before taxes
	float tax; 			// percentage cash total to be calculated to deduct from grossPay
	float netPay; 		// employee earnings amount AFTER taxes
	float totalPayroll=0; // sum of all payroll for all employees
	
	
	totalPayroll = totalPayroll + netPay;
	
	printf("How many employees are there?\n");
	scanf ("%d", &numOfEmployees);
	
	for ( x = 0; x < numOfEmployees; ++x )
	{
		printf("Enter 7-Digit Employee ID Number\n");
		scanf( "%d", &empID); 
			
		printf("Enter Amount of Regular Hours Worked by Employee\n");
		scanf ("%f", &hours); 
		
		printf("Enter Hourly Pay Rate\n");
		scanf ("%f", &payRate);
		
	
		if (hours <= 40){
		grossPay = (hours*payRate);
		printf("Employee Gross Pay is %f\n", grossPay);
		tax = grossPay * .03525;
		printf("Tax Deducted is %f\n", tax); 
		netPay = (grossPay - tax);
		printf("This employee's Total Net Pay is: %.2f\n", netPay);
		}
		else{
		grossPay = (hours - 40)*(1.5 * payRate)+(40 * payRate);
		printf("Employee Gross Pay is %f\n", grossPay);
		tax = grossPay * .03525;
		printf("Tax Deducted is %f\n", tax);
		netPay = (grossPay - tax);
		printf("This employee's Total Net Pay is: %.2f\n", netPay);
		}
		
		printf("Data Entry for this Employee Complete\n");
		totalPayroll += netPay;
	}			
	
	
	printf("Total amount paid in payroll is %f\n", totalPayroll); //print sum of all paid to employees
	
}
