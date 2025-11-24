#include<stdio.h>

void sayHello(){
printf("Hello,student!you just called me back!\n");
}

void studentwork(void(*callbackFunc)()){
printf("student is doing homework...\n");

callbackFunc();
}
int main(){
studentwork(sayHello);
return 0;

 }
