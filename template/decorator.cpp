#include <iostream>

template <class T>
class CallProxy{
  T *p_;
 public:
  CallProxy(T *pp): p_(pp){ }
  ~CallProxy(){
    Suffix();
  }
  T* operator->(){
    Prefix();
    return p_;
  }
  void Prefix(){
    std::cout << "func is start" << std::endl;
  }
  void Suffix(){
    std::cout << "func is end" << std::endl;
  }
};

template <class T>
class Decorator{
  T* p_;
 public:
  Decorator(T* pp):p_(pp){ }
  CallProxy<T> operator->(){
    return CallProxy<T>(p_);
  }
};

class DecoratorDemo{
 public:
  void test(){
    Decorator<DecoratorDemo> run_func(this);
    run_func->run();
  }
 private:
  void run(){
    std::cout << "running" << std::endl;
  }
};
 
int main() {
  DecoratorDemo test;
  test.test();
  return 0;
}