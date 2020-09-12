#include<iostream>
using namespace std;

template<typename T> //定义一个函数模板，T:类型参数
T abs(T x){
    return x<0 ? -x:x;
}

int main(){
    int n=-5;
    double d=-5.5;
    cout<<abs(n)<<endl; //调用模板时编译器自动生成对应参数类型的函数
    cout<<abs(d)<<endl;
    return 0;
}