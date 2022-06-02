[主页](https://ganggangxiao.github.io/)
[文章](https://ganggangxiao.github.io/list/)
[关于](https://ganggangxiao.github.io/about/)
[托管地址](https://github.com/ganggangxiao/ganggangxiao.github.io/)
[评论](https://github.com/ganggangxiao/ganggangxiao.github.io/issues)  
创建时间 2022 03 30 | 修改时间 2022 06 02

# **0004 - C++学习 01 - const和指针**

C++ Primer 5e上有一种很不错的方法判断复合类型的含义，我给大家分享一下，那就是从右往左阅读，离对象最近的符号对对象的类型有最直接的影响,把星号读作Pointer to： 
``` cpp
int const *ptr_a;           // ptr_a is a pointer to const int
int const *const ptr_b;     // ptr_b is a const pointer to const int
int *const ptr_c;           // ptr_c is a const pointer to int
int *const *ptr_d;          // ptr_d is a pointer to const pointer to int

```

这里有一个规律，星号左边的标识符可以任意调换顺序，右边亦是这样，但是左右边不能乱换。

所以int const\*和const int\*没有什么区别，前者更易于理解，后者则更符合人类的书写习惯，就根据自己喜好来，但是一但选择一种代码风格就不要随意更改了。

const跟指针最常用的两种用法就是
``` cpp
int *const          // 指向int的const指针 (顶层const)
int const *const    // 指向const int的const指针 (底层&顶层const)
``` 

读C++ Primer时，const跟指针这块有点懵，这种方法就可以帮我们有效地理解。希望这篇文章能帮到你

## **以上 - The End.**


