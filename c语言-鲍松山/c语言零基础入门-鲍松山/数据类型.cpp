#include<stdio.h>

int main(){

    float f=12.34;
    double d=23.456;
    printf("char= %ld\n",sizeof(char)); // 1 字节
    printf("short= %ld\n",sizeof(short)); // 2 字节
    printf("int= %ld\n",sizeof(int)); // 4 字节
    printf("long= %ld\n",sizeof(long)); // 8 字节
    printf("long long= %ld\n",sizeof(long long)); // 8 字节
    printf("float= %ld\n",sizeof(float)); // 4
    printf("double= %ld\n",sizeof(double)); // 8
    
    return 0;
}