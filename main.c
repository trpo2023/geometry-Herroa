#include <stdio.h>

typedef struct{
    int x;
    int y;
} point;

int circletest(char *str)
{   
    char str2[7]="circle";
    int flag = 1;
    for(int i=0;i<7;i++){
        if(str[i]!=str2[i]){
            flag = 0;
        }
        if(!flag){return 0;}
    }
    return 1;
}

int tritest(char *str)
{   
    char str2[9]="triangle";
    int flag = 1;
    for(int i=0;i<9;i++){
        if(str[i]!=str2[i]){
            flag = 0;
        }
        if(!flag){return 0;}
    }
    return 2;
}

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
            printf("%d\n",circletest(str));
            printf("%d\n",tritest(str));
        }
    return 0;
}