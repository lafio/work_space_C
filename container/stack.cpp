#include <iostream>
#include <algorithm>
#include <stack>
#include <iterator>
using namespace std;

int main(){
    stack<char> s;
    string str;
    cin>>str;
    
    for(string::iterator iter=str.begin();iter!=str.end();++iter)
        s.push(*iter);
    while(!s.empty()){
        cout<<s.top();
        s.pop();
    }
    cout<<endl;
    return 0;
}