 #include <stdio.h>

 int main(int argc, char *argv[])
 {
 
 int i = 0;
 while (i < 25) {
 printf("%d ", i);
 i++;
 }



 // __________________________________________________
 // MAKE A WHILE LOOP COUNT BACKWARDS : 
/*

 int z = 25;
 while (z >= 0) {
 printf("\n %d ", z);
 z--;
 }

 return 0;
 */
 // __________________________________________________________


// ADDITIONAL WHILE LOOP 

int n = 0;
while (n <= 10) {
    n++;

    /* check that n is odd */
    if (n % 2 == 1) {
        /* go back to the start of the while block */
        continue;
    }

    /* we reach this code only if n is even */
    printf("\n The number %d is even.\n", n);
}
}