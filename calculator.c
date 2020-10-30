#include<stdio.h>
int main()
{
	float radius,pi=3.14,circumfrance,area,diameter;
	printf("enter the radius");
	scanf("%f",&radius);
	printf(" radius is %f\n",radius);
	circumfrance=2*pi*radius;
    diameter=2*radius;
    printf("diameter is %f \n",diameter);
	printf("circumfrance is %f \n",circumfrance);
	area=pi*radius*radius;
	printf("area is %f",area);
}
