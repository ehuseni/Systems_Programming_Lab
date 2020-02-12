 #include <stdio.h>

 int main(int argc, char *argv[])
 {
 int i=0;

 // go through each string in argv
 // why am I skipping argv[0]?
 for (i = 1; i < argc; i++) {
 printf("arg %d: %s\n", i, argv[i]);
 }

 // let's make our own array of strings
 char *states[] = {
 "California", "Oregon",
 "Washington", "Texas" };

 int num_states = 4;

 for (i = 0; i < num_states; i++) {
 printf("state %d: %s\n", i, states[i]);
 }

 return 0;
 }



/*  EXTRA CREDIT 

1. for instance if we didn't have a fixed number of states, we would use statements inside a for loop to count the number of states.  

2. commas separate arguments for example  function1(a, b), meanwhile
semicolons ; separate sequential instructions for example (instruction1; instruction2; instruction3). which can be also seen on the for loop  ->   for (i = 0; i < num_states; i+


3. It is printing (null)

*/

