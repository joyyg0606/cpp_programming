#ifndef _MYSTRING_H_
#define _MYSTRING_H_

class Mystring
{
    friend Mystring operator-(const Mystring &obj);
    friend Mystring operator+(const Mystring &lhs, const Mystring &rhs);
    friend bool operator==(const Mystring &lhs, const Mystring &rhs);
    friend bool operator!=(const Mystring &lhs, const Mystring &rhs);
    friend bool operator<(const Mystring &lhs, const Mystring &rhs);
    friend bool operator>(const Mystring &lhs, const Mystring &rhs);
    friend Mystring &operator+=(Mystring &lhs, const Mystring &rhs);
    friend Mystring operator*(const Mystring &lhs, int n);
    friend Mystring &operator*=(Mystring &lhs, int n);
    friend Mystring &operator++(Mystring &obj);
    friend Mystring operator++(Mystring &obj, int);
    friend std::ostream &operator << (std::ostream &os, const Mystring &rhs);
    friend std::istream &operator>>(std::istream &in, Mystring &rhs);
private:
    char *str; //pointe rto a char[]

public:
    Mystring();
    Mystring(const char *s);
    Mystring (const Mystring &source);
    Mystring(Mystring &&source);
    ~Mystring();

    Mystring &operator=(const Mystring &rhs); //copy assignment
    Mystring &operator=(Mystring &&rhs);

    void display() const;
    int get_length() const;
    const char *get_str() const;

    //overloaded operator member methods
    Mystring operator -() const;
    Mystring operator+(const Mystring &rhs) const;
    bool operator==(const Mystring &rhs) const;
    bool operator!=(const Mystring &rhs) const;
    bool operator<(const Mystring &rhs) const;
    bool operator>(const Mystring &rhs) const;
    Mystring &operator+=(const Mystring &rhs);
    Mystring operator *(int n) const;
    Mystring &operator*=(int n);
    Mystring &operator++();
    Mystring operator++(int);
};

#endif