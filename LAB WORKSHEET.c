/* 

1.Write a C program that accepts two integers from the user and calculate the sum of the
two integers

#include <stdio.h>
int main() {    

    int number1, number2, sum;
    
    printf("Enter two integers: (seperate them by space) ");
    scanf("%d %d", &number1, &number2);
    sum = number1 + number2;      
    
    printf("The sum of %d + %d is equal to %d", number1, number2, sum);
    return 0;
}

________________________________________________________________________________________

2. Write a C program that accepts three integers and find the maximum of three. (you can
use if-else)

#include <stdio.h> 
int main() 
{ 
    int A, B, C; 
  
    printf("Enter three numbers: "); 
    scanf("%d %d %d", &A, &B, &C); 
  
    if (A >= B && A >= C) 
        printf("The largest number is %d ", A); 
  
    else if (B >= A && B >= C) 
        printf("The largest number is %d ", B); 
  
    else
        printf("The largest number is %d ", C); 
  
    return 0; 
} 

_______________________________________________________________________________________

3. Write a C program that reads an integer between 1 and 12 and print the month of the year
in English.

#include <stdio.h>

int main() {
	int mno;
	printf("\nInput a number between 1 to 12 to get the month name: ");
	scanf("%d", &mno);
	switch(mno) {
		case 1 : printf("January\n"); break;
		case 2 : printf("February\n"); break;
		case 3 : printf("March\n"); break;
		case 4 : printf("April\n"); break;
		case 5 : printf("May\n"); break;
		case 6 : printf("June\n"); break;
		case 7 : printf("July\n"); break;
		case 8 : printf("August\n"); break;
		case 9 : printf("September\n"); break;
		case 10 : printf("October\n"); break;
		case 11 : printf("November\n"); break;
		case 12 : printf("December\n"); break;
		default : printf("Input a number between 1 to 12.");
	}
	return 0;
}

________________________________________________________________________________________

4. Write a C program that prints all even numbers between 1 and 50 (inclusive). Test Data : Even numbers between 1 to 50 (inclusive): Expected Output: 2 4 6 8 10 12 14 16 18 20 22 24 26 28 30 32 34 36 38 40 42 44 46 48 50 
#include <stdio.h>

int main() {
	int i;
	printf("Even numbers between 1 to 50 (inclusive):\n");
	for (i = 1; i <= 50; i++) 
	{
		if(i%2 == 0) 
		{
		  printf("%d ", i);
		}
	}
	return 0;
}

________________________________________________________________________________________'


5. Write a C program that read 5 numbers and sum of all odd values between them.

#include <stdio.h>
int main() {
	int j, numbers[5],total=0;
	printf("\nInput the first number: "); 
    scanf("%d", &numbers[0]);
    printf("\nInput the second number: "); 
    scanf("%d", &numbers[1]);
    printf("\nInput the third number: "); 
    scanf("%d", &numbers[2]);
	printf("\nInput the fourth number: "); 
    scanf("%d", &numbers[3]);
    printf("\nInput the fifth number: "); 
    scanf("%d", &numbers[4]);
	for(j = 0; j < 5; j++) {
		if((numbers[j]%2) != 0) 
		{
		   total += numbers[j];
		}	
    }
   	printf("\nSum of all odd values: %d", total);
	return 0;
}
*/


