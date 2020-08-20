#include <iostream>
#include <vector>
using namespace std;

int fx(int a,int b,int n){
    if(n==2||n==1){
        return 1;
    }else return (a*fx(a,b,n-1)+b*fx(a,b,n-2))%7;
}

int main(){
    vector<int> result;
    int a,b,n;
    while(1){
        cin>>a>>b>>n;
        if(a==0||b==0||n==0)break;
        else result.push_back(fx(a,b,n));
    }
    for(int i=0;i<result.size();i++){
        cout<<result[i]<<endl;
    }
    return 0;
}