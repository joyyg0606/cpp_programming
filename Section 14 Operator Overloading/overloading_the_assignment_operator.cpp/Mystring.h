#ifndef _MYSTRING_H_
#define _MYSTRING_H_

class Mystring {
private:
    char *str; //pointer to a char[] that holds C-style string
public:
    Mystring();
    Mystring(const char *s);
    Mystring(const Mystring &source); //copy consturctor
    ~Mystring();
    
    Mystring &operator = (const Mystring &rhs); //copy assignment

    void display() const;
    int get_length() const;
    const char *get_str() const;
};

#endif