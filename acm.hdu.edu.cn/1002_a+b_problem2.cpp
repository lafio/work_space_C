#include <iostream>
#include <vector>
#include <string>
using namespace std;

string add(string a,string b){
    int len_a=a.length();
    int len_b=b.length();
    int len_c;
    int carry=0;
	int temp;
    string c;
    if(len_a>=len_b){
        len_c=len_a;
        for(int k=0;k<len_a-len_b;k++)
            b="0"+b;
    }else{
        len_c=len_b;
        for(int k=0;k<len_b-len_a;k++)
            a="0"+a;
    }
    for(int i=len_c-1;i>=0;i--)
    {
        temp=a[i]-'0'+b[i]-'0'+carry;
        carry=temp/10;
        temp=temp%10;
        c=char(temp+'0')+c;
        }	
    if(carry!=0)
    c=char(carry+'0')+c;

    return c;
}

int main(){
    unsigned n;
    vector<string> aa,bb,cc;
    string a,b,c;
    cout<<"Please enter number of cases:"<<endl;
    cin>>n;
    for(unsigned i=0;i<n;i++){
        cin>>a>>b;
        c=add(a,b);
        aa.push_back(a);
        bb.push_back(b);
        cc.push_back(c);
    }
    for(unsigned i=0;i<n;i++){
        cout<<"Case "<<i+1<<":"<<endl;
        cout<<aa[i]<<" + "<<bb[i]<<" = "<<cc[i]<<endl<<endl;
    }
    return 0;
}