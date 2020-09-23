#include <iostream>
#include <list>
#include <deque>
#include <iterator>
using namespace std;

//输出指定的顺序容器的元素
template <class T>
void printContainer(const char* msg,const T& s){
    cout <<msg<<":";
    copy(s.begin(),s.end(),ostream_iterator<int>(cout,""));
    cout<<endl;
}
int main(){
    //从标准输入读入10个整数，将它们分别从s的头部加入
    deque<int> s;
    for(int i=0;i<10;i++){
        int x;
        cin>>x;
        s.push_front(x);
    }
    printContainer("deque at first",s);
    //用s容器的内容的逆序构造列表容器l
    list<int> l(s.rbegin(),s.rend());
    printContainer("list at first",l);
}