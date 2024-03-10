// Copyright 2024 Moiseev Nikita
#include "tasks.h"
#include "circle.h"

const double EARTH_RADIUS = 6378.1 * 1000;
const double ROPE_LENGTH = 1;
const double POOL_RADIUS = 3;
const double ROAD_WIDTH = 1;
const double CONCRETE_COST = 1000;
const double FENCE_COST = 2000;

double earthAndRope(double ROPE_LENGTH) {
    Circle earth(EARTH_RADIUS);
    double newFerence = earth.getFerence() + ROPE_LENGTH;
    Circle earth2(newFerence);
    return earth2.getRadius() - earth.getRadius();
}


double poolCost(double POOL_RADIUS, double ROAD_WIDTH, 
    double CONCRETE_COST, double FENCE_COST) {
    Circle pool(POOL_RADIUS);
    Circle poolWithRoad(pool.getRadius() + ROAD_WIDTH);

    double concreteArea = poolWithRoad.getArea() - pool.getArea();
    double fenceFerence = poolWithRoad.getFerence();

    return concreteArea * CONCRETE_COST + fenceFerence * FENCE_COST;
}
