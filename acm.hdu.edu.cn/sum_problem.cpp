#include <iostream>
#include <vector>
using namespace std;

int sum(int n){
    int sum=0;
    while(n>0){
        sum+=n;
        n-=1;
    }
    return sum;
}

int main(){
    int num;
    vector<int> n;
    while(cin>>num){
        n.push_back(sum(num));
    }
    for(unsigned int i=0;i<n.size();i++){
        cout<<n[i]<<endl;
    }
    return 0;
}