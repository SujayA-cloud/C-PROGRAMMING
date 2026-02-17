#include <stdio.h>

struct marks{
    float phy;
    float chem;
    float cp;
};

int main(){
struct marks s1= {45,50,48};
printf("phy marks:%.2f",s1.phy);
printf("chem marks:%.2f",s1.chem);
printf("cp marks:%.2f",s1.cp);

return 0;
}
