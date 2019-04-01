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

TEST(TRatio, can_create_another_ratio)
{
    // Arrange
    const int num = 1;
    const int den = 2;

    // Act
    TRatio r(num, den);

    // Assert
    EXPECT_EQ(num, r.GetNumerator());
    EXPECT_EQ(den, r.GetDenominator());
}

TEST(TRatio, cannot_give_zero_as_den)
{
    // Arrange
    const int num = 1;
    const int den = 0;

    // Act & Assert
    EXPECT_ANY_THROW(TRatio r(num, den));
}