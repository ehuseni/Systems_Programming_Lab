 #include <stdio.h>

 int main(int argc, char *argv[])
 {
 int numbers[4] = { 0 };
 char name[4] = { 'a' };

 // first, print them out raw
 printf("numbers: %d %d %d %d\n",
 numbers[0], numbers[1], numbers[2], numbers[3]);

 printf("name each: %c %c %c %c\n",
 name[0], name[1], name[2], name[3]);

 printf("name: %s\n", name);

 // set up the numbers
 numbers[0] = 1;
 numbers[1] = 2;
 numbers[2] = 3;
 numbers[3] = 4;

 // set up the name
 name[0] = 'Z';
 name[1] = 'e';
 name[2] = 'd';
 name[3] = '\0';

 // then print them out initialized
 printf("numbers: %d %d %d %d\n",
 numbers[0], numbers[1], numbers[2], numbers[3]);

 printf("name each: %c %c %c %c\n",
 name[0], name[1], name[2], name[3]);

 // print the name like a string
 printf("name: %s\n", name);

 // another way to use name
 char *another = "Zed";

 printf("another: %s\n", another);

 printf("another each: %c %c %c %c\n",
 another[0], another[1], another[2], another[3]);

 return 0;
 }

 /* EXTRA CREDIT : 

 1. We get am warmomg for an incompatible pointer types initializing int* with an expression of type char




 2. we do not have a debugger in repl.int
To do the inverse it goes as follows: 

char name[4] = {'a'};
    name[0] = 100;
    name[1] = 101;
    name[2] = 102;
    name[3] = 103;
    printf("name each: %d %d %d %d\n", name[0], name[1], name[2], name[3]);


 3.we can print everything at once, each character, reverse, 



 4. Yes. Each character in the 4 bytes array can represent 8-bit in a 32-bit integer. So we use the first element in the array to represent the first 8 bits, and the second element for the second 8 bits.


 5.


 6. It  treats *name like an array of int and print it out one int at a time.However, it fails to assign int to the element in *name:

  char *name = "abcd";
    
    printf("name each: %d %d %d %d\n", name[0], name[1], name[2], name[3]);

    return 0;

  char *name = "abcd";
    name[0] = 100;

    printf("name each: %d %d %d %d\n", name[0], name[1], name[2], name[3]);
