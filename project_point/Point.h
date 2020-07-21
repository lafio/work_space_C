#include <iostream>
using namespace std;

class Point{
    public:
        Point(int x=0,int y=0):x(x),y(y){}
        Point(const Point &p);
        ~Point(){count--;}
        int getX() const {return x;}
        int getY() const {return y;}
        static void showCount();
    private:
        int x,y;
        static int count;
};
int Point::count = 0;

Point::Point(const Point &p):x(p.x),y(p.y){
    count++;
}

void Point::showCount(){
    cout<<" Object count="<<count<<endl;
}