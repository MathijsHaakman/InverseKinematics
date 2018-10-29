//
// Created by Mathijs Haakman on 5-9-2018.
//

#ifndef ROBOTARMMOTIONANDVISION_SEGMENT_H
#define ROBOTARMMOTIONANDVISION_SEGMENT_H

#include "Vector.h"

class Segment {
public:
    Segment(double length, double angle = 0 );

    Vector getEndpoint();
    Vector getEndpoint(Vector root);
    Vector getRootPosition();
    void print();
    void turnTowardsDestinationPoint(Vector, Segment*);
    Segment *setPreviousSegment;

private:
    double angle;
    double length;
    Segment *previousSegment = nullptr;

};


#endif //ROBOTARMMOTIONANDVISION_SEGMENT_H
