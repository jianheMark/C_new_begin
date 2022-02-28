//
// Created by JIAN HE on 2022-02-28.
//

#include <stdio.h>
int main()
{
    int a,b;
    a = 4; b = 23;
    printf("a=%2d, b=%3d\n",a,b);
    a = 1221;b=19234;

    //when the length of the variable is more than the width specified, then the output will be print out correctly.
    printf("a=%2d,b=%3d",a,b);
    float c,d;
//    scanf("%3f%4f",&c,&d);
//    //input 5.21 983.71 a will be stored as 5.2, b will be stored as 1
//    printf("%f\n",c);
//    printf("%f\n",d);

    c = 32.1; d = 45.11;
    //yield c=32.10,d=45.11
    printf("\nc=%4.2f,d=%4.2f\n",c,d);

    c = 34189.313; d = 415.1411;

    printf("c=%5.2f,d=%4.3f\n",c,d); //return c=34189.31,d=415.141
    printf("%10s","code");

    printf("%10.3s","code");

    printf("\n");
    printf("%.6s","codeindepth"); //yield codein.

    return 0;
}