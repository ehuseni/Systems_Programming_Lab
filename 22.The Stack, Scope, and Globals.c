#ifndef _ex22_h
#define _ex22_h
// makes THE_SIZE in ex22.c available to other .c files
extern int THE_SIZE;
// gets and sets an internal static variable in ex22.c
int get_age();
void set_age(int age);
// updates a static variable that's inside update_ratio
double update_ratio(double ratio);
void print_size();
#endif

 #include <stdio.h>
 #include "ex22.h"
 #include "dbg.h"

 int THE_SIZE = 1000;

 static int THE_AGE = 37;

 int get_age()
 {
 return THE_AGE;
 }

 void set_age(int age)
 {
 THE_AGE = age;
}

 double update_ratio(double new_ratio)
 {
 static double ratio = 1.0;

 double old_ratio = ratio;
 ratio = new_ratio;

 return old_ratio;
 }

 void print_size()
 {
 log_info("I think size is: %d", THE_SIZE);
 }


 1 #include "ex22.h"
 #include "dbg.h"

 const char *MY_NAME = "Zed A. Shaw";

 void scope_demo(int count)
 {
 log_info("count is: %d", count);

 if (count > 10) {
 int count = 100; // BAD! BUGS!

 log_info("count in this scope is %d", count);
 }

 log_info("count is at exit: %d", count);

 count = 3000;

 log_info("count after assign: %d", count);
 }

 int main(int argc, char *argv[])
 {
 // test out THE_AGE accessors
 log_info("My name: %s, age: %d", MY_NAME, get_age());

 set_age(100);

 log_info("My age is now: %d", get_age());

 // test out THE_SIZE extern
 log_info("THE_SIZE is: %d", THE_SIZE);
 print_size();

 THE_SIZE = 9;

 log_info("THE SIZE is now: %d", THE_SIZE);
 print_size();

 // test the ratio function static
 log_info("Ratio at first: %f", update_ratio(2.0));
 log_info("Ratio again: %f", update_ratio(10.0));
 log_info("Ratio once more: %f", update_ratio(300.0));

 // test the scope demo
 int count = 4;
 scope_demo(count);
 scope_demo(count * 20);

 log_info("count after calling scope_demo: %d", count);

 return 0;
 }