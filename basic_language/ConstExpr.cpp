#include "iostream"

constexpr int fibonacci(const int n) {
    return n == 1 || n == 2 ? 1 : fibonacci(n-1) + fibonacci(n-2);
}

template<typename T>
void ConstIfInt(const T& i){
    if constexpr (std::is_integral<T>::value){
        std::cout << i << " is int" << std::endl;
    }else{
        std::cout << i << " is not int" << std::endl;
    }
}

int main(){
    int arr[fibonacci(2)];
    arr[0] = 1;
    std::cout << arr[0] << std::endl;
    std::cout << "arr sizeof: " << sizeof(arr) << std::endl;

    for(int i = 0; i < 10; i++){
        ConstIfInt(i);
    }
}

