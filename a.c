//
// Created by 39221 on 2023/3/16.
//
#include<stdio.h>
#include <synchapi.h>

/*
int ret(char * a){
    if(*a == 1){
        return 1;
    } else{
        return 0;
    }
              注意：如何判别系统是以大端储存还是小端储存
}
int main(){
    int a = 1;
    char * b = &a;
    if(ret(b) == 1)
    {
        printf("小端");
    } else
    {
        printf("大端");
    }
    return 0;
}*/


/*    注意：整形提升 与 内存 如何存放数据：源码、补码、反码
int main(){
    char a = -1;
    signed char b = -1;
    unsigned char c = -1;
    char d = -128;
    printf("%d %d %d %u",a,b,c,d);
    return 0;
}*/


/*      打印结果：9，8，...0,死循环
int main(){
    unsigned int i;
    for( i = 9;i >= 0;i--){
        printf("%d ",i);
        Sleep(1000);
    }
}
*/


/*
int main(){     注意：-1，-2，...127，126，...0截至，一共255个元素
    char a[1000];
    int i;
    for(i = 0;i < 1000;i++){
        a[i] = -1 - i;
    }
    printf("%d",strlen(a));
}*/


/*int main(){   注意：死循环！
    unsigned char a = 0;
    for(a = 0;a <= 255;a++){
        printf("hello,world!");
    }
}*/

/*int main(){
    float a = 5.5;
    return 0;
}*/

int main(){
    int n = 9;      //浮点数与整型数的储存方式差异所导致的不同后果
    float *pfloat = (float *)&n;
    printf("n的值为:%d\n",n);
    printf("pfloat的值为：%f\n",*pfloat);
    *pfloat = 9.0;
    printf("num的值为：%d\n",n);
    printf("*pfloat的值为:%f\n",*pfloat);
    return 0;
}
