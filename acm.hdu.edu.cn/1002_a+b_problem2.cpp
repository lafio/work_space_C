#include <iostream>
#include <vector>
#include <string>
using namespace std;

string add(string a,string b){
    string c="";
    int len_a=a.length();
    int len_b=b.length();
    int len_c;
    int v_a[len_a],v_b[len_b],v_c[len_c];
    if(len_a>=len_b){   //  c的长度是a和b中较长那个，为了防止溢出，+1
        len_c=len_a+1;
    }else{
        len_c=len_b+1;
    }
    for(unsigned i=0;i<len_a;i++){  //  v_a和v_b是a和b倒序的结果
        v_a[i++]=a[len_a-i-1]-'0';
    }
    for(unsigned i=0;i<len_b;i++){
        v_b[i++]=b[len_b-i-1]-'0';
    }
    for(unsigned i=0;i<len_c;i++){  //  初始化v_c每项为0
        v_c[i]=0;
    }
    for(unsigned i=0;i<len_c-1;i++){    //  相加和进位
        v_c[i]+=v_a[i]+v_b[i];  
        if(v_c[i]>=10){
            v_c[i+1]+=v_c[i]/10;
            v_c[i]%=10;
        }
    }
    if(v_c[len_c-1]==0){
        for(unsigned i=0;i<len_c-1;i++)
        c+=v_c[len_c-2-i]+'0';
    }else{
        for(unsigned i=0;i<len_c;i++)
        c+=v_c[len_c-1-i]+'0';
    }
    return c;
}

int main(){
    unsigned n;
    vector<string> a,b,c;
    cout<<"Please enter number of cases:"<<endl;
    cin>>n;
    for(unsigned i=0;i<n;i++){
        cin>>a[i]>>b[i];
        c[i]=add(a[i],b[i]);
    }
    for(unsigned i=0;i<n;i++){
        cout<<"Case "<<i+1<<":"<<endl;
        cout<<a[i]<<" + "<<b[i]<<" = "<<c[i]<<endl<<endl;
    }
    return 0;
}