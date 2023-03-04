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

float circle_per(char *str, float r){
    if(circletest(str,r)){
        float p;
        p = 2*3.14*r;
        return p;
    }
    else{
        printf("circle doesnt exist\n");
        return -1.0;
    }
}

float circle_area(char *str, float r){
    if(circletest(str,r)){
        float s;
        s = 3.14*r*r;
        return s;
    }
    else{
        printf("circle doesnt exist\n");
        return -1.0;
    }
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

    myfile = fopen("123.txt","r");
    while (
        fscanf(myfile, "%s %d %d %f", str, &p.x, &p.y, &r) != EOF){
            printf("%s %d %d %lf\n", str, p.x, p.y, r);
            printf("p = %lf\n s = %lf\n",circle_per(str,r),circle_area(str,r));
        }
    return 0;
}