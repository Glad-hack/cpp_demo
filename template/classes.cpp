#include <iostream>
#include <vector>

class ObjectA{
  void print(){
    std::cout << "my name is A" << std::endl;
  }
};

class ObjectB{
  void print(){
    std::cout << "my name is B" << std::endl;
  }
};

template<class T>
class TestBase{
 public:
  void add(T obj){
    ve_.emplace_back(obj);
  }
 private:
  std::vector<T> ve_;

};
