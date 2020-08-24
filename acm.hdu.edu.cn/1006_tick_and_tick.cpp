#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

double cha(double a,double b){
    if(a>b) return a-b;
    else return b-a;
}

int main(){
    double h,m,s;
    double d;
    vector<double> percent;
    while(1){
        cin>>d;
        if(d<0)break;
        else{
            int count=0;
            for(int i=0;i<12;i++){
                for(int j=0;j<60;j++){
                    for(int k=0;k<60;k++){
                        s=6*k;
                        m=6*j+s/60;
                        cout<<m<<endl;
                        h=30*i+m/12;
                        if(cha(s,m)>=d && cha(s,h)>=d && cha(m,h)>=d) count++;
                    }
                }
            }
            percent.push_back(count/432.0); // (count/43200)*100
        }
    }
    if(percent.size()>0){
        for(int i=0;i<percent.size();i++){
            cout<<setiosflags(ios::fixed)<<setprecision(3)<<percent[i]<<endl;
        }
    }
}