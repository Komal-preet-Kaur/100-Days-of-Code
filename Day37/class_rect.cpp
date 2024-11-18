#include <string>
#include <iostream>
using namespace std;

class Rectangle {
private:
    int x; 
    int y; 
    int width; 
    int height; 
public:
    // Constructor
    // member initialization list
    Rectangle(int x, int y, int width, int height) : x(x), y(y), width(width), height(height) {}
    
    // Getters
    int getHeight() { return height; }
    int getWidth() { return width; }
    int getX() { return x; }
    int getY() { return y; }
    
    string toString() {
        return "Rectangle[x=" + to_string(x) + ",y=" + to_string(y) + ",width=" + to_string(width) + ",height=" + to_string(height) + "]";
    }
};

int main() {
    
    Rectangle rect(5, 10, 15, 20);
    cout << rect.toString() << endl;
    return 0;
}