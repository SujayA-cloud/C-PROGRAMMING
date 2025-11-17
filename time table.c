#include <stdio.h>

int main(){
    int period;
    printf("enter period(1-6):");
    scanf("%d",&period);
    switch(period){
    case 1:
        printf("7:15am-8;15am : CPL\n");
        break;

        case 2:
        printf("8:15am-9:15am : CPL\n");
        break;

        case 3:
            printf("10am-11am :CMAT\n");
            break;

        case 4:
            printf("11am-12pm :CO\n");
            break;

        case 5:
            printf("12:45pm-1:45pm :LINUX\n");
            break;

        case 6:
            printf("1:45pm-2:45pm :LIB\n");
            break;

        default :
            printf("invalid day\n");
            }
            return 0;
}
