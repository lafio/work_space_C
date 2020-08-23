#include <iostream>
#include <vector>
using namespace std;

int fx(int a,int b,int n){
    int begin=0,end=1;
    int r[60];
    int flag=0;
    r[0]=r[1]=r[2]=1;
    if(n==2||n==1){
        return 1;
    }else{
        for(int i=3;i<=n && !flag;i++){
            r[i]=(r[i-1]*a+r[i-2]*b)%7;
            for(int j=2;j<i;j++){
                if(r[j]==r[i] && r[j-1]==r[i-1]){
                    begin=j;
                    end=i;
                    flag=1;
                    break;
                }
            }
        }
        if(flag)return r[begin+(n-end)%(end-begin)];
        else return r[n];
    }
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