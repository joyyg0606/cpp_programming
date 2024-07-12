#include <iostream>
#include <vector>

class Shape {
public:
    virtual void draw() = 0;
    virtual void rotate() = 0;
    virtual ~Shape() {}
};

class Open_Shape : public Shape {
public:
    virtual ~Open_Shape() {}
};

class Closed_Shape : public Shape {
public:
    virtual ~Closed_Shape() {}
};

class Line : public Open_Shape {
public:
    virtual void draw() override {
        std::cout << "Drawing a line" << std::endl;
    }
    virtual void rotate() override {
        std::cout << "Rotating a line" << std::endl;
    }
    virtual ~Line() {}
};

class Circle : public Closed_Shape {
public:
    virtual void draw() override {
        std::cout << "Drawing a circle" << std::endl;
    }
    virtual void rotate() override {
        std::cout << "Rotating a circle" << std::endl;
    }
    virtual ~Circle() {}
};

class Square : public Closed_Shape {
public:
    virtual void draw() override {
        std::cout << "Drawing a square" << std::endl;
    }
    virtual void rotate() override {
        std::cout << "Rotating a square" << std::endl;
    }
    virtual ~Square() {}
};

void screen_refresh(const std::vector<Shape *> &shapes) {
    std::cout << "refreshing" << std::endl;
    for(const auto p: shapes)
        p->draw();
}

int main() {
    Shape *ptr = new Circle();
    ptr->draw();
    ptr->rotate();

    Shape *s1 = new Circle();
    Shape *s2 = new Line();
    Shape *s3 = new Square();

    std::vector<Shape *> shapes {s1, s2, s3};
    for (const auto p: shapes) 
        p->draw();

    // Clean up memory
    delete ptr;
    delete s1;
    delete s2;
    delete s3;

    return 0;
}
