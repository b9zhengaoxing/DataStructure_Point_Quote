# DataStructure_Point_Quote

#1.指针和引用

----------


```
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
```
![这里写图片描述](http://img.blog.csdn.net/20150925102915023)

有个人外号叫“刀巴”，——其实他的外号是色，刀疤是这个人的引用

你可以拨打138938找到一个人，这个电话就是指向那个人的指针

![这里写图片描述](http://img.blog.csdn.net/20150925102741641)

#2.指针VS引用

----------

```
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
    //不能改——你见过外号天天改的么？
    //必须初始化——外号不能凭空事先取好
}
```
![这里写图片描述](http://img.blog.csdn.net/20150925103905239)

![这里写图片描述](http://img.blog.csdn.net/20150925105639295)

#3.谁是常量
----------

```
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
```

![这里写图片描述](http://img.blog.csdn.net/20150925110024006)

![这里写图片描述](http://img.blog.csdn.net/20150925110813054)

#4.传参
----------
```
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
```

```
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
```

![这里写图片描述](http://img.blog.csdn.net/20150925111521141)

三种传递描述起来倒是不难，看过火影的人都知道鸣人的绝招“影分身之术”，分身战死了，还可以再生，本尊死了，就真死了。

指针传递+参数传递——本尊

值传递——分身

![这里写图片描述](http://img.blog.csdn.net/20150925111738834)


