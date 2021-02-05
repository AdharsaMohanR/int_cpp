#include<gtest/test.h>
#include "calc.h"
TEST(CalculatorTest,add){
    EXPECT_EQ(100,add(80,20));
    EXPECT_EQ(60,add(80,-20));
    EXPECT_EQ(-50,add(-20,-30));
}
TEST(CalculatorTest, sub){
    EXPECT_EQ(60,sub(80,20));
    EXPECT_EQ(100,subt(80,-20));
    EXPECT_EQ(-50,sub(-20,-30));
}
TEST(CalculatorTest,mul){
    EXPECT_EQ(1600,mul(80,20));
    EXPECT_EQ(-1600,mul(80,-20));
    EXPECT_EQ(600,mul(-20,-30));
}
TEST(CalculatorTest,add){
    EXPECT_EQ(4,div(80,20));
    EXPECT_EQ(-4,div(80,-20));
    EXPECT_EQ(0,div(-20,-30));
}

int main(int argc,char **argv){
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

