#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ifstream file("integers",ios_base::in | ios_base::binary);
    if(file){
        while(file){//读到文件尾file为0
            streampos here=file.tellg();
            int v;
            file.read(reinterpret_cast<char *>(&v),sizeof(int));
            if(file && v==0)
                cout<<"Position "<<here<<" is 0"<<endl;
        }
    }else{
        cout<<"Error:Cannot open file 'integers'."<<endl;
    }
    file.close();
    return 0;
}