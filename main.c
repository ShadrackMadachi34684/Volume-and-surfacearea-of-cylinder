#include <stdio.h>
#include <stdlib.h>

float PI = 3.1412;

float calculatevolume(float R,float H);
float calculatesurface(float R,float H);

int main()
{
    float R,H,volume,surfacearea;

    printf("Enter the radius and height of the cylinder in CM");
    scanf("%f%f",&R,&H);

    volume = calculatevolume(R, H);
    surfacearea = calculatesurface(R, H);

    printf("\n==THE RESULT IS==\n");
    printf("volume is:%.2f\n CM\n",volume);
    printf("surfacearea is:%.2f\n CM",surfacearea);

    return 0;
}

float calculatevolume(float R,float H)
{

    float volume;

    volume = PI*R*R*H;

    return volume;

}

float calculatesurface(float R,float H){

    float surfacearea;


    surfacearea=2*PI*R*R+2*PI*R*H;

    return surfacearea;

}
