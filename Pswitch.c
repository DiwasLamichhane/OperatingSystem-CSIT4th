// Program to check the state and analyze the output

#include <stdio.h>
#include <unistd.h>
int main(){
int pid;
pid = fork();
if (pid == 0){
for(;;)
printf("I am child");
}else if(pid>0){
for(;;)
printf("I am parent");

}}
