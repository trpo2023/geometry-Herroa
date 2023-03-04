#include <stdio.h>

typedef struct{
    int x;
    int y;
} point;

int circletest(char *str, float r)
{   
    char str2[7]="circle";
    int flag = 1;
    for(int i=0;i<7;i++){
        if(str[i]!=str2[i]){
            flag = 0;
        }
        if(!flag){return 0;}
    }
    if(r<0){return 0;}
    return 1;
}

float circle_per(float r){
    float p;
    p = 2*3.14*r;
    return p;

}

float circle_area(float r){
    float s;
    s = 3.14*r*r;
    return s;
}

// int tritest(char *str)
// {   
//     char str2[9]="triangle";
//     int flag = 1;
//     for(int i=0;i<9;i++){
//         if(str[i]!=str2[i]){
//             flag = 0;
//         }
//         if(!flag){return 0;}
//     }
//     return 2;
// }

int main()
{
    FILE *myfile;
    char str[10];
    float r;
    point p;

    myfile = fopen("geometry.txt","r");
    while (
        fscanf(myfile, "%s %d %d %f", str, &p.x, &p.y, &r) != EOF){
            printf("%s %d %d %lf\n", str, p.x, p.y, r);
            if(circletest(str,r)){
                printf("p = %lf\ns = %lf\n",circle_per(r),circle_area(r));
            }
            else{
                printf("isnt cirlce\n");
            }
        }   
    return 0;
}