#include <iostream>

template <int size>
struct Fibonacci {
    static constexpr u_int64_t value = Fibonacci<size - 1>::value + Fibonacci<size - 2>::value;
};

template <>
struct Fibonacci<0> {
    static constexpr u_int64_t value = 0;
};

template <>
struct Fibonacci<1> {
    static constexpr u_int64_t value = 1;
};

template <int size>
constexpr auto Fibonacci_v = Fibonacci<size>::value;

int main() {
    std::cout << Fibonacci_v<80> << '\n';
    return 0;
}
