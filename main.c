#include <stdio.h>

typedef struct{
    int x;
    int y;
} point;

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
        }
    return 0;
}