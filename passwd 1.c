#include <stdio.h>
#include <string.h>
int main(){

char password[6];
char *username = "ace";

printf("laptop username:%s\n",username);
printf("enter a alpha numerical password:");
scanf("%6s",password);


if(strlen(password)>6){
    printf("password sucessful\n");
    printf("%s\n",username);
}else {
printf("password invalid\n");
printf("password should be 6 digits exact\n");
}

return 0;

}

