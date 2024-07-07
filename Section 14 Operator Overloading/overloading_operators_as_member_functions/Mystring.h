#ifndef _MYSTRING_H_
#define _MYSTRING_H_

class Mystring {
    friend bool operator==(const Mystring &lhs, const Mystring &rhs);
    friend Mystring operator-(const Mystring &obj);
    friend Mystring operator+(const Mystring &lhs, const Mystring &rhs);
private:
    char *str; //pointer to a char[] that holds C-style string
public:
    Mystring();
    Mystring(const char *s);
    Mystring(const Mystring &source); //copy consturctor
    Mystring(Mystring &&source); //move constructor
    ~Mystring();
    
    Mystring &operator = (const Mystring &rhs); //copy assignment
    Mystring &operator = (Mystring &&rhs); //move assignment

    Mystring operator-() const; //make lowercase
    Mystring operator+(const Mystring &rhs) const; //concatenate
    bool operator==(const Mystring &rhs) const;

    void display() const;
    int get_length() const;
    const char *get_str() const;
};

#endif