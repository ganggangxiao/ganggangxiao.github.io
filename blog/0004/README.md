[主页](https://ganggangxiao.github.io/)
[文章](https://ganggangxiao.github.io/list/)
[关于](https://ganggangxiao.github.io/about/)
[我的GitHub](https://github.com/ganggangxiao/)
[本网站托管地址](https://github.com/ganggangxiao/ganggangxiao.github.io/)
[评论](https://github.com/ganggangxiao/ganggangxiao.github.io/issues)  
创建时间 2022 03 30 | 修改时间 2022 0430

# **0004 - C++学习 01 - const和指针**

C++ Primer 5e上有一种很不错的方法判断复合类型的含义，我给大家分享一下，那就是从右往左阅读，离对象最近的符号对对象的类型有最直接的影响,把星号读作Pointer to： 
``` cpp
int const *ptr_a;           // ptr_a is a pointer to const int
int const *const ptr_b;     // ptr_b is a const pointer to const int
int *const ptr_c;           // ptr_c is a const pointer to int
int *const *ptr_d;          // ptr_d is a pointer to const pointer to int

```

这里有一个规律，星号左边的标识符可以任意调换顺序，右边亦是这样，但是左右边不能乱换。

所以int const\*和const int\*没有什么区别，但是后者更符合人类的书写习惯，后者更易于理解、便于维护，就根据自己喜好来吧，我自己写一般是后者。

最常用的两种用法就是
``` cpp
int *const          // 指向int的const指针 (顶层const)
int const *const    // 指向const int的const指针 (底层&顶层const)
``` 

读C++ Primer时，const跟指针这块一直搞不懂，这种方法就可以有效地帮助你理解  
希望这篇文章能帮到你  
我只是个小白，理解不够透彻，表达不够严谨，如果文章中有错误，可以在本网页的托管地址提issue

## **以上 - The End.**


