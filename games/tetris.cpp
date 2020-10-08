#include <SFML/Graphics.hpp>
using namespace sf;
//complier with adding follows
//-lsfml-graphics -lsfml-window -lsfml-system
int main(){
    RenderWindow window(VideoMode(200,200),"SFML works");
    CircleShape shape(100.f);
    shape.setFillColor(Color::Green);
    while(window.isOpen()){
        Event evt;
        while(window.pollEvent(evt)){
            if(evt.type==Event::Closed)window.close();
        }
        window.clear();
        window.draw(shape);
        window.display();
    }
    return 0;
}