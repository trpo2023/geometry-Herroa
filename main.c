#include <math.h>
#include <stdio.h>
#include <stdlib.h>
typedef struct {
    int x;
    int y;
} point;

int circletest(char* str, float r)
{
    char str2[7] = "circle";
    int flag = 1;
    for (int i = 0; i < 7; i++) {
        if (str[i] != str2[i]) {
            flag = 0;
        }
        if (!flag) {
            printf("Error at column 0: expected 'circle'\n");
            return 0;
        }
    }
    if (r < 0) {
        printf("Error: radius less then zero\n");
        return 0;
    }
    return 1;
}

float circle_per(float r)
{
    float p;
    p = 2 * M_PI * r;
    return p;
}

float circle_area(float r)
{
    float s;
    s = M_PI * r * r;
    return s;
}

int main()
{
    FILE* myfile;
    char str[10];
    float r;
    point p;

    myfile = fopen("geometry.txt", "r");
    if (myfile == NULL) {
        printf("Не найден файл в директории\n");
        exit(0);
    }
    while (fscanf(myfile, "%s %d %d %f", str, &p.x, &p.y, &r) != EOF) {
        printf("%s %d %d %lf\n", str, p.x, p.y, r);
        if (circletest(str, r)) {
            printf("p = %lf\ns = %lf\n", circle_per(r), circle_area(r));
        }
    }
    return 0;
}
