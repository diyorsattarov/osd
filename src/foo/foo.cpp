#include "../../include/foo/foo.h"

Foo::Foo() {}

Foo::Foo(int value) : value_(value) {}

int Foo::getValue() const {
    return value_;
}

void Foo::setValue(int value) {
    value_ = value;
}