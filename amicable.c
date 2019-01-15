// CS 153 PROGRAM ASSIGNMENT #3 
// 
// Amicable pairs program that prompts the user for 
// an upper limit and then prints all amicable pairs
// as well as perfect numbers up to the upper limit.
// The program asks for an upper limit input and then
// uses that to calculate all amicable pairs and perfect
// numbers. 
// 
// Mark Schuberth 
// 
// 9/24/2018 

#include <stdio.h>
#include <stdlib.h>

/* method that calculates the amicable numbers */
/* with the sum initialized as 0 and runs as long as trial */
/* is less than or equal to num/2 */
int sumDivisors(int num)
{
 int sum = 0, trial;
 
 /* for loop that calculates amicable numbers */
 for(trial = 1; trial <= num/2; trial++)
  {
   if(num % trial == 0)
   {
    sum += trial;
   }
  }
  
 return sum;
}

/* main program that prompts the user for the upper limit */
/* and then calculates the perfect numbers less than the limited */
/* as well as prints the final result of all perfect and */
/* amicable numbers less than the limit */
int main ()
{
 int lower = 1, upper, S, N;
 
 /* prompts the user for the upper limit */
 printf("Please enter an upper limit: ");
 scanf("%d", &upper);
 
 /* for loop that prints the amicable pairs and perfect numbers */
 /* until the upper limit entered by the user is reached */
  for (S = lower; S <= upper; S++) 
  {
   N = sumDivisors (S);
   if (S == N) 
   {
    printf ("perfect number:\t%d\n", S);
   }
   if ((S < N) && (S <= upper) && (sumDivisors (N) == S)) 
   {
    printf ("amicable pair:\t(%d, %d)\n", S, N);
   }
  }

 return 0;
}