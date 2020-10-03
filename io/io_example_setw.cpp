#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main(){
    double values[]={1.23,35.36,653.7,4358.24};
    string names[]={"Zoot","Jimmy","AI","Stan"};
    cout<<setiosflags(ios_base::fixed);//设置输出精度为保留小数点后位数，而不是有效位数
    for(int i=0;i<4;i++)
        cout<<setiosflags(ios_base::left)//左对齐
        <<setw(6)<<names[i]
        <<resetiosflags(ios_base::left)
        <<setw(10)<<setprecision(1)<<values[i]<<endl;
    return 0;
}