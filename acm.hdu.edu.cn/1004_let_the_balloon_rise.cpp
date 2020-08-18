#include <iostream>
#include <vector>
using namespace std;

vector<string> popular(){
    int count,a,max_index,max=0;
    string c,n,x;
    vector<string> color,result;
    vector<int> number;
    while(1){
        cin>>count;
            if(count>0){
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
                if(number[i]>=max){
                    max==number[i];
                    max_index=i;
                }
            }
            //cout<<color[max_index]<<endl;
            result.push_back(color[max_index]);
            vector<int>().swap(number);
            vector<string>().swap(color);
        }else{
            return result;
        }
    }
}

int main(){
    vector<string> result=popular();
    for(int i=0;i<result.size();i++)
        cout<<result[i]<<endl;
    return 0;
}