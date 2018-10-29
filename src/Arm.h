//
// Created by Mathijs Haakman on 5-9-2018.
//

#ifndef ROBOTARMMOTIONANDVISION_ARM_H
#define ROBOTARMMOTIONANDVISION_ARM_H

#include "Segment.h"
#include "Vector.h"

class Arm {

private:
    Vector destination = Vector(0, 0);
    double threshold = 0;

public:
    void addSegment(Segment segment);
    bool isNearDestinationPoint();
    void print(bool printAllSegments);
    void printRealEndpoint();
    void run();
    void setDestinationPoint(int x, int y);
    void setThreshold(double distance);
};

#endif //ROBOTARMMOTIONANDVISION_ARM_H
