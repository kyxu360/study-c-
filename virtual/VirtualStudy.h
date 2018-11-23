#ifndef VIRTUALSTUDY_H
#define VIRTUALSTUDY_H

#include <common/utils.h>

using namespace cz;

class Base {
public:
    Base() {}
    virtual ~Base() {}

    virtual void func1() = 0;
    virtual void func2() {cInfo << "this is base func2";}
    virtual void func3() {cInfo << "this is base func3";}
    void func4() {cInfo << "this is base func4";}
    void func5() {cInfo << "this is base func5";}
};

class Derived : public Base {
public:
    Derived() {}
    virtual ~Derived() {}
    virtual void func1() {cInfo << "this is derived func1";}
	virtual void func2() { Base::func2(); cInfo << "this is derived func2"; }
    void func4() {cInfo << "this is derived func4";}
};

#endif // !VIRTUALSTUDY_H
