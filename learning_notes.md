#C++学习笔记

2020-07-27
1、不要将非静态局部地址用作函数的返回值。在子函数中定义局部变量后将其地址返回给主函数，就是非法地址。
2020-07-28
1、函数指针：
    函数指针的用途：①通过函数指针调用函数。可以将函数的指针作为参数传递给一个函数，使得在处理相似时间的时候可以灵活运用地使用不同的方法
                 ②调用者不用关心谁是被调用者。