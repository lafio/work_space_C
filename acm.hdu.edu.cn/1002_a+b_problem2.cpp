#include <iostream>
#include <vector>
using namespace std;

int add(int a,int b){
    return a+b;
}

double add(double a,double b){
    return a+b;
}

int main(){
    cout<<"Please enter number of cases:"<<endl;
    unsigned int n;
    double c,d;
    cin>>n;
    vector<double> sum,vec_c,vec_d;
    if (n>=1 && n<=20){
        while(n>=1){
            cin>>c>>d;
            vec_c.push_back(c);
            vec_d.push_back(d);
            sum.push_back(add(c,d));
            n--;
        }
    }
    for(unsigned i=0;i<sum.size();i++){
        cout<<vec_c[i]<<"+"<<vec_d[i]<<"="<<sum[i]<<endl<<endl;
    }
}