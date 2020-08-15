#include <iostream>
#include <vector>
using namespace std;

vector<int> max_sum(vector<int> a){
    int sum=0,sum_max=0,start=0,end=0;
    vector<int> b;
    for(int i=0;i<a.size();i++){
        for(int j=i;j<a.size();j++){
            for(int k=i;k<=j;k++){
                sum+=a[k];
                if(sum>sum_max){
                    sum_max=sum;
                    start=i;
                    end=j;
                }
            }
            sum=0;
        }
    }
    b={sum_max,start+1,end+1};
    return b;
}
int main(){
    int n;
    vector<int> aa;
    vector<int> _a;
    vector<vector<int>> bb;
    int a;
    cout<<"Please enter number of cases:"<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a;
        if(a>=1){
            int x;
            for(int j=0;j<a;j++){
                cin>>x;
                _a.push_back(x);
                aa=max_sum(_a);
            }
        }
        bb.push_back(aa);
        vector<int>().swap(aa);
        vector<int>().swap(_a);
    }
    for(int i=0;i<n;i++){
        cout<<"Case "<<i+1<<":"<<endl;
        for(int j=0;j<3;j++){
            cout<<bb[i][j]<<" ";
        }
        cout<<endl<<endl;
    }
    return 0;
}