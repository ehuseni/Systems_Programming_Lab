 #include <stdio.h>
 #include <ctype.h>

 // forward declarations
 int can_print_it(char ch);
 void print_letters(char arg[]);

 void print_arguments(int argc, char *argv[])
 {
 int i = 0;

 for (i = 0; i < argc; i++) {
 print_letters(argv[i]);
 }
 }

 void print_letters(char arg[])
 {
 int i = 0;

 for (i = 0; arg[i] != '\0'; i++) {
 char ch = arg[i];

 if (can_print_it(ch)) {
 printf("'%c' == %d ", ch, ch);
 }
 }

 printf("\n");
 }

 int can_print_it(char ch)
 {
 return isalpha(ch) || isblank(ch);
 }

 int main(int argc, char *argv[])
 {
 print_arguments(argc, argv);
 return 0;
 }


/* EXTRA CREDIT : 

1. if we directly delete the can_print_it function, we are going to have errors. However, we can make less fucntions like this : 

void print_letters(char arg[]);

void print_letters(char arg[])
{
    int i = 0;
    
    for (i = 0; arg[i] != '\0'; i++) {
        char ch = arg[i];
        
        if (isalpha(ch) || isblank(ch)) {
            printf("'%c' == %d ", ch, ch);
        }
    }
    
    printf("\n");
}

after, on the main function we can create a for loop ant call the print_letters(argv[i]) fucntion 



2. 

#include <stdio.h>
#include <ctype.h>
#include <string.h>

// forward declarations
int can_print_it(char ch);
void print_letters(char arg[], int length);

void print_arguments(int argc, char *argv[])
{
    int i = 0;
    
    for (i = 0; i < argc; i++) {
        print_letters(argv[i], strlen(argv[i]));
    }
}

void print_letters(char arg[], int length)
{
    int i = 0;
    
    for (i = 0; i < length; i++) {
        char ch = arg[i];
        
        if (can_print_it(ch)) {
            printf("'%c' == %d ", ch, ch);
        }
    }
    
    printf("\n");
}

int can_print_it(char ch)
{
    return isalpha(ch) || isblank(ch);
}

int main(int argc, char *argv[])
{
    print_arguments(argc, argv);
    return 0;
}


3. 

#include <stdio.h>
#include <ctype.h>

// forward declarations
int can_print_it(char ch);
void print_letters(char arg[]);

void print_arguments(int argc, char *argv[])
{
    int i = 0;
    
    for (i = 0; i < argc; i++) {
        print_letters(argv[i]);
    }
}

void print_letters(char arg[])
{
    int i = 0;
    
    for (i = 0; arg[i] != '\0'; i++) {
        char ch = arg[i];
        
        if (can_print_it(ch)) {
            printf("'%c' == %d ", ch, ch);
        }
    }
    
    printf("\n");
}

int can_print_it(char ch)
{
    return isdigit(ch) || ispunct(ch);
}

int main(int argc, char *argv[])
{
    print_arguments(argc, argv);
    return 0;
}

4.  
he K&R C style function definitions result in some unexpected behaviors. With K&R C, the compiler does not remember the number or types of the arguments that the function takes. The only thing that is remembered is the return type of the function.

*/
