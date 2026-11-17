// ============================================================
// Complex.cpp - Complex 类成员函数实现
//
// 补全后运行 ./build/complex_demo，应该输出：
//   a = 3 + 4i
//   a + b = 4 + 6i
//   a - b = 2 + 2i
// 全部做完后再跑 ctest，应该显示 100% tests passed。
// ============================================================

#include "Complex.h"

#include <iostream>

using namespace std;

// 构造函数：用初始化列表给数据成员赋值
Complex::Complex(double r, double i) : real(r), imag(i) {}

// 析构函数：本类没有动态内存，函数体为空
Complex::~Complex() {}

// 复数相加：返回新对象，不修改 a、b 本身（const 成员函数）
Complex Complex::operator+(const Complex& other) const {
    return Complex(real + other.real, imag + other.imag);
}

// 复数相减：实部、虚部分别相减，同样返回新对象
Complex Complex::operator-(const Complex& other) const {
    return Complex(real - other.real, imag - other.imag);
}

// 按约定格式打印：虚部 >= 0 输出 a + bi，虚部 < 0 输出 a - bi
void Complex::print() const {
    if (imag >= 0) {
        cout << real << " + " << imag << "i" << endl;
    } else {
        cout << real << " - " << -imag << "i" << endl;
    }
}

// 读取实部
double Complex::getReal() const {
    return real;
}

// 读取虚部
double Complex::getImag() const {
    return imag;
}