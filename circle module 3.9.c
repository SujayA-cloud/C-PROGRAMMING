#include <stdio.h>

struct circle {
float radius;
float area;
};
int main(){
struct circle c;
float pi=3.14;
c.radius=12;
c.area=pi*c.radius*c.radius;
printf("radius = %.2fcm\n",c.radius);
printf("area of the circle=%.2fcm^2\n",c.area);

return 0;
}
