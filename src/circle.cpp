// Copyright 2024 Moiseev Nikita
#include <cstdint>
#include <math.h>
#include "circle.h"

const double Circle::PI = std::atan(1.0) * 4;

Circle::Circle(double radius) {
    setRadius(radius);
}

void Circle::setRadius(double radius) {
    this->radius = radius;
    ference = 2 * PI * radius;
    area = PI * radius * radius;
}

void Circle::setFerence(double ference) {
    this->ference = ference;
    radius = ference / (2 * PI);
    area = PI * radius * radius;
}

void Circle::setArea(double area) {
    this->area = area;
    radius = sqrt(area / PI);
    ference = 2 * PI * radius;
}

double Circle::getRadius() const {
    return radius;
}

double Circle::getFerence() const {
    return ference;
}

double Circle::getArea() const {
    return area;
}