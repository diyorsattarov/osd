#ifndef FOO_H
#define FOO_H

class Foo {
public:
    Foo();
    Foo(int value);
    int getValue() const;
    void setValue(int value);
private:
    int value_;
};

#endif //FOO_H