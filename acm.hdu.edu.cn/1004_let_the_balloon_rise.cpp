#include <iostream>
#include <vector>
using namespace std;

int main(){
    int count,a,max_index;
    string c,n,x;
    vector<string> color;
    vector<int> number;
    while(cin>>count){
        for(int i=0;i<count;i++){
            cin>>c;
            color.push_back(c);
        }
        for(int i=0;i<color.size();i++){
            a=0;
            for(int j=i;j<color.size();j++){
                if(color[i]==color[j])
                    a+=1;
            }
            number.push_back(a);
        }
        for(int i=0;i<number.size();i++){
            for(int j=i;j<number.size();j++){
                if(number[i]>=number[j])
                    max_index=i;
            }
        }
        cout<<color[max_index]<<endl;
        vector<int>().swap(number);
        vector<string>().swap(color);
    }
    return 0;
}