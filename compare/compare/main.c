//
//  main.c
//  compare
//
//  Created by yh-imac on 2018/11/15.
//  Copyright © 2018 hselenat. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int max(int x,int y,int z);
    int a,b,c,d;
    printf("请输入");
    scanf("%d,%d,%d",&a,&b,&c);//&是地址符，表示变量a的地址
    d = max(a, b, c);//调用max函数，将得到的值赋给c
    printf("max = %d\n",d);
    return 0;
}
//求三个整数中的较大者的max函数
int max(int x,int y,int z) {
    int q;
    if(x>y && x>z)q=x;
    else if(y>x && y>z) q=y;
    else q=z;
    return (q);
}
