#include <iostream>
using namespace std;

int compute(int a,int b,int(*func)(int,int)){
    return func(a,b);
}
int max(int a,int b){
    return ((a>b)?a:b);
}
int min(int a,int b){
    return ((a<b)?a:b);
}
int sum(int a,int b){
    return a+b;
}

int main(){
    int a,b,res;
    cout<<"please input integer a: ";cin>>a;
    cout<<"please input integer b: ";cin>>b;

    res = compute(a,b,&max);
    cout<<"Max of "<<a<<" and "<<b<<" is "<<res<<endl;
    res = compute(a,b,&min);
    cout<<"Min of "<<a<<" and "<<b<<" is "<<res<<endl;
    res=compute(a,b,&sum);
    cout<<"Sum of "<<a<<" and "<<b<<" is "<<res<<endl;
}