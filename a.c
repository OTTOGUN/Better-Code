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
              ע�⣺����б�ϵͳ���Դ�˴��滹��С�˴���
}
int main(){
    int a = 1;
    char * b = &a;
    if(ret(b) == 1)
    {
        printf("С��");
    } else
    {
        printf("���");
    }
    return 0;
}*/


/*    ע�⣺�������� �� �ڴ� ��δ�����ݣ�Դ�롢���롢����
int main(){
    char a = -1;
    signed char b = -1;
    unsigned char c = -1;
    char d = -128;
    printf("%d %d %d %u",a,b,c,d);
    return 0;
}*/


/*      ��ӡ�����9��8��...0,��ѭ��
int main(){
    unsigned int i;
    for( i = 9;i >= 0;i--){
        printf("%d ",i);
        Sleep(1000);
    }
}
*/


/*
int main(){     ע�⣺-1��-2��...127��126��...0������һ��255��Ԫ��
    char a[1000];
    int i;
    for(i = 0;i < 1000;i++){
        a[i] = -1 - i;
    }
    printf("%d",strlen(a));
}*/


/*int main(){   ע�⣺��ѭ����
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
    int n = 9;      //���������������Ĵ��淽ʽ���������µĲ�ͬ���
    float *pfloat = (float *)&n;
    printf("n��ֵΪ:%d\n",n);
    printf("pfloat��ֵΪ��%f\n",*pfloat);
    *pfloat = 9.0;
    printf("num��ֵΪ��%d\n",n);
    printf("*pfloat��ֵΪ:%f\n",*pfloat);
    return 0;
}
