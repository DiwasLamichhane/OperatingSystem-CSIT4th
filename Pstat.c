// Execute the program and issue the command ps -el three times in every 10 second and analyze their output

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>
int main(){
int pid;
pid = fork();
if(pid == 0){
printf("I am child, ID = %d\n", getpid());
printf("Parent ID =%d\n", getppid());
sleep(10);
printf("I am child, ID = %d\n", getpid());
printf("Parent ID =%d\n", getppid());
}else{
sleep(10);
printf("I am child, ID = %d\n", getpid());
printf("Parent ID =%d\n", getppid());
}
}
