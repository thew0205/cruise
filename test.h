//#define LOG(value) std::cout << value << std::endl
#include <iostream>
class test {
  int a;

public:
  test(int);
  ~test();
  test &operator+(const test &t);
  int getA() const { return a; }
  /// test (test& t){
  //}
};

class test2 {
public:
  test2() {
    printf("test2 constructor is called\n");
  }

  void print() {
    printf("test2 print is called\n");
  };
  ~test2() {
    printf("test2 destructor is called\n");
  }
};

class test2e : public test2 {
public:
  test2e() {

    printf("test2e constructor is called\n");
  }
  void print() {
    test2::print();

    printf("test2e print is called\n");
  }

  ~test2e() {
    printf("test2e destructor is called\n");
  }
};
