// Program to create a process using fork

#include<stdio.h>
#include<unistd.h>
int main () {
printf("This id to demonstrate the fork\n");
fork ();
fork ();
fork ();
printf("Hii! \n");
}
