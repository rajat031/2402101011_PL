#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int isColinear(float x1, float x2, float x3, float y1, float y2, float y3)
{
    if(((x1 == x2) && (x2 == x3) )||((y1 == y2) && (y2 == y3))){
        return 0;
    }
    else
        return 1;
}

float findLength(float x1, float x2, float y1, float y2){
    float length = sqrt(pow((x2-x1),2) + (pow((y2-y1),2)));
    return length;
}

int isTriangle(float a, float b, float c){
    if((a + b > c) && (a + c > b) && (b + c > a)){
        return 0;
    }
    else
        return 1;
}

int isEquilateral(float a, float b, float c){
    if((a == b) && (b == c)){
        return 0;
    }
    else
        return 1;
}

int isIsoceles(float a, float b, float c){
    if((a == b) || (a == c) || (b == c)){
        return 0;
    }
    else
        return 1;
}

int isScalene(float a, float b, float c){
    if(a != b && a != c && b != c){
        return 0;
    }
    else
        return 1;
}

int main(){
    
    float x1,x2,x3,y1,y2,y3;   
    
    printf("Enter x1:");
    scanf("%f", &x1);
    
    printf("Enter y1:");
    scanf("%f", &y1);

    printf("Enter x2:");
    scanf("%f", &x2);

    printf("Enter y2:");
    scanf("%f", &y2);

    printf("Enter x3:");
    scanf("%f", &x3);

    printf("Enter y3:");
    scanf("%f", &y3);
    
    float a = findLength(x1,x2,y1,y2);
    float b = findLength(x1,x3,y1,y3);
    float c = findLength(x2,x3,y2,y3);
    
    if(isColinear(x1,x2,x3,y1,y2,y3) == 0){
        printf("Points are colinear");
        return 0;
    }
    
    else if(isTriangle(a, b, c) == 0)
    {
        if(isEquilateral(a, b, c) == 0){
            printf("Equilateral Triangle");
            return 0;
        }
    
        else if(isIsoceles(a, b, c) == 0){
            printf("Isoceles Triangle");
            return 0;
        }
    
        else if(isScalene(a, b, c) == 0){
            printf("Scalene Triangle");
            return 0;
        }
    }
    
    else{
        printf("Not a triangle");
        return 0;
    }
}