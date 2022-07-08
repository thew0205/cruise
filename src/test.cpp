
#include "../test.h"

  test::test(int a_i):a{a_i}
{
    printf("creating test");
    //ctor
}

test::~test()
{
    //dtor
}

test& test::operator+(const test& t){
    a += t.a;
    return *this;
}
