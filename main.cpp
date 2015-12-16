//
//  main.cpp
//  print_address
//
//  Created by 魏新宇 on 15/12/16.
//  Copyright © 2015年 魏新宇. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    int a=1;
    int *p;
    p=&a;
    printf("%d %d %x %x",a,p,&a,&p);
    return 0;
}