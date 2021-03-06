//
// Created by Wangdawei on 2018/11/22.
//

#include <cmath>
#include "vector.h"

Vec::Vec() {
    x = 0;
    y = 0;
}

double Vec::getX() {
    return this->x;
}

double Vec::getY() {
    return y;
}

Vec::Vec(double x, double y) {
    this->x = x;
    this->y = y;
}

Vec Vec::operator+(Vec v) {
    return Vec(x + v.getX(), y + v.getY());
}

Vec Vec::operator-(Vec v) {
    return Vec(x - v.getX(), y - v.getY());
}

Vec Vec::operator*(double k) {
    return Vec(k * x, k * y);
}

double Vec::operator*(Vec v) {
    return x * v.getX() + y * v.getY();
}

Vec Vec::operator<<(double angle) {
    Vec a1(cos(angle), -sin(angle)), a2(sin(angle), cos(angle));
    return Vec(a1 * (*this), a2 * (*this));
}

Vec Vec::operator>>(double angle) {
    return (*this) << (-angle);
}

Vec& Vec::operator=(Vec v) {
//    Vec ret(v.getX(),v.getY());
    this->x=v.getX();
    this->y=v.getY();
    return *this;
}