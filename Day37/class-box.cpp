class Box
{
  private:
  int length;
  int breadth;
  int height;
  
  public:
  Box(): length(0),breadth(0),height(0){}
  Box(int l, int b, int h) : length(l), breadth(b), height(h) {}
  
  Box(const Box& b1) : length(b1.length), breadth(b1.breadth), height(b1.height) {}
  
  int getLength() const {
        return length;
    }
    // Getter for breadth
    int getBreadth() const {
        return breadth;
    }
    // Getter for height
    int getHeight() const {
        return height;
    }
  
 long long CalculateVolume() {
    long long len = length; // Convert only once
    return len * breadth * height;
}
};

int main(){
    Box b1;
}