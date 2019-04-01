#include "tratio.h"

#include <gtest.h>

TEST(TRatio, can_create_ratio)
{
    // Arrange
    const int num = 2;
    const int den = 3;

    // Act
    TRatio r(num, den);

    // Assert
    EXPECT_EQ(num, r.GetNumerator());
    EXPECT_EQ(den, r.GetDenominator());
}