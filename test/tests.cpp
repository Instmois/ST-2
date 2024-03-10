// Copyright 2024 Moiseev Nikita
#include "gtest/gtest.h"
#include "circle.h"
#include "tasks.h"

TEST(CircleTests, DefaultConstructor) {
    Circle circle;
    EXPECT_EQ(circle.getRadius(), 0.0);
    EXPECT_EQ(circle.getFerence(), 0.0);
    EXPECT_EQ(circle.getArea(), 0.0);
}

TEST(CircleTests, SetRadius) {
    Circle circle;
    circle.setRadius(5.0);
    EXPECT_NEAR(circle.getRadius(), 5.0, 1e-8);
    EXPECT_NEAR(circle.getFerence(), 31.4159265359, 1e-8);
    EXPECT_NEAR(circle.getArea(), 78.5398163397, 1e-8);
}

TEST(TasksTests, EarthAndRope) {
    EXPECT_NEAR(earthAndRope(), 0.159154943092, 1e-8);
}

TEST(TasksTests, PoolCost) {
    EXPECT_EQ(poolCost(), 31400);
}

int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
