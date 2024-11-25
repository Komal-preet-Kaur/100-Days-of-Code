#include <iostream>

using namespace std;
class Rectangle{
    
protected:
    int width, height;

public:
    void read_input() {
        cin >> width >> height;
    }

    void display() {
        cout << width << " " << height << endl;
    }
};

class RectangleArea : public Rectangle {
public:
    void display() {
        cout << (width * height) << endl;
    }
};


int main()
{
    Rectangle r_area;
    r_area.Rectangle::display();
     r_area.read_input();

    r_area.display();
    
    return 0;
}