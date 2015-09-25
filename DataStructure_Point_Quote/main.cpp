//
//  main.cpp
//  DataStructure_Point_Quote
//
//  Created by tengfei li on 11/9/15.
//  Copyright (c) 2015年 LYD. All rights reserved.
//

#include <iostream>
#include <stdlib.h>

using namespace std;

#pragma mark- 1.about Point Quote
void createPointAndQuote()
{
    //指针就像电话号码——指向 人 （正确的错误的）  有时也会空号
    char char_tmp='a';
    char *char_point=&char_tmp;
    
    printf("指针是一个地址:\n%x\n",char_point);
    
    //引用quote就像一个外号，是人众多称呼中的一个
    char &quote_char=char_tmp;
    printf("引用就像一个外号:\n%c\n",quote_char);
}

#pragma mark- difference between them
void difference()
{
    //point——电话
    //电话——换号——指针指向不同
    //电话——空号——空指针
    //打错了——野指针
    //大小四个字节(32位)  8（64位）
    string str="123456";
    string &ref=str;
    string *point=&str;
    
    cout<<"ref:"<<ref<<"\tpoint:"<<*point<<endl;
    cout<<"sizeof(ref):"<<sizeof(ref)<<"\tsizeof(pointer)"<<sizeof(point)<<endl;
    
    
    
    //quote——外号
    //不能改——不换
    //必须初始化——不空
}

#pragma mark- const  谁是常量

void whoIsConst()
{
    int a=10;
    int b=12;
    
    //常量指针——指针指向的常量——对方——固定电话：电话（point）不能到处跑
    const int* pointer=&a;
    pointer=&b;
    //*pointer=20;
    
    printf("\n常量指针——就是固定电话%d\n",*pointer);
    
    //指针常量——你用的公用电话——你跑不了
    int *const pointer2=&a;
//    pointer2=&b;
    
    printf("\n指针常量——就是公用电话%d\n",*pointer2);
    
}


#pragma mark- 指针传参和引用传参

void swapint(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}

void swapint2(int &a,int &b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
}

void swapint3(int a,int b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
}



int main(int argc, const char * argv[]) {
    
//    createPointAndQuote();
//    difference();
//    whoIsConst();
    
    
    int a=10;
    int b=20;
    
    //指针传参
    swapint(&a,&b);
    cout<<"指针传参"<<endl;
    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;
    
    
    //引用传参
    swapint2(a,b);
    cout<<"引用传参"<<endl;
    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;
    
    
    //值传递
    swapint3(a,b);
    cout<<"值传参"<<endl;
    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;

    return 0;
}
