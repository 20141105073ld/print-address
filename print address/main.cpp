//
//  main.cpp
//  print address
//
//  Created by 20141105073 on 15/12/9.
//  Copyright © 2015年 20141105073. All rights reserved.
//
#include <iostream>
#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    int a,*p;
    a=100;
    p=&a;
    
    printf("a=%x &a=%x &p=%x p=%x *p=%x\n",a,&a,&p,p,*p);
    return 0;
}