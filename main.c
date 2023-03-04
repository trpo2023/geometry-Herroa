#include <stdio.h>

int main()
{
    FILE *myfile;
    char str[10];
    float r;
    myfile = fopen("123.txt","r");
    while (
        fscanf(myfile, "%s%f", str, &r) != EOF){
            printf("%s %f\n", str, r);
        }
    return 0;
}