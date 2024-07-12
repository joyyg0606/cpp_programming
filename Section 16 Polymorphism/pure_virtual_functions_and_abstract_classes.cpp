#include <iostream>
#include <vector>

class Shape {
private:

public:
    virtual void draw() = 0;
    virtual void rotate() = 0;
    virtual ~Shape() {}
};

class Open_Shape: public Shape {
public:
    virtual ~Open_shape() {}
};

class Closed_Shape : public Shape {
public: 
    virtual ~Closed_Shape() {};
};

class Line : public Open_Shape {
public:
    virtual void draw() override {
        std::cout << "Drawing a line" << std::endl;
    }
    virtual void rotate() override {
        std::cout << "Rotating a line" << std::endl;
    }
    virtual ~Circle() {}
};

class Square: public Closed_Shape {
public:
    virtual void draw() override {
        std::cout << "Drawing a square" << std::endl;
    }
    virtual void rotate() override {
        std::cout << "Rotating a square" << std::endl;
    }
    virtual ~Square() {}
};

int main() {
    Shape s;
    Shape *p = new Shape();

    
    return 0;
}