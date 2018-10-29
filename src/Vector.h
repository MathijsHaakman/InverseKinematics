//
// Created by Mathijs Haakman on 17-9-2018.
//

#ifndef ROBOTARMMOTIONANDVISION_VECTOR_H
#define ROBOTARMMOTIONANDVISION_VECTOR_H

#include <ostream>

class Vector {
public:
    Vector(double x, double y);
    Vector(double x, double y, double z);

    Vector add(Vector);
    Vector getCrossProduct(Vector vector);
    double getDotProduct(Vector vector);
    double squaredDistance(Vector vector);
    double getX();
    double getY();
    double getZ();
    bool isInRange(Vector target, double threshold);
    void normalize();
    friend std::ostream& operator<<(std::ostream& os, Vector& dt);

private:
    double x;
    double y;
    double z;
};

#endif //ROBOTARMMOTIONANDVISION_VECTOR_H
