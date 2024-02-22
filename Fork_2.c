// Program to create process using fork and print process id 

#include<stdio.h>
#include<unistd.h>
int main(){
int pid;
printf("Main Program Process ID is %d\n",(int)getpid());
pid = fork();
if (pid != 0){
printf("Parent Process with ID is %d \n", (int)getppid());
printf("Child Process with ID is %d\n",(int)getpid());
}else{
printf("Child Process with ID is %d\n",(int)getpid());}}
