//
// Created by Ded on 23.01.2021.
//
#include "../src/MergeSort.cpp"
#include <gtest/gtest.h>
#include <limits.h>

TEST (MergeSort, SortWhithMaxValue) {

    // Arrange
    int n = 10;
    int *sourceArray = new int[n]{INT_MAX, 7, 6, 4, 5, 3, 8, 0, 2, 1};
    int *expectedArray = new int[n]{0, 1, 2, 3, 4, 5, 6, 7, 8, INT_MAX};

    // Act
    msort(sourceArray, n);
    bool isEqual = 1;
    for (size_t i = 0; i < n; i++)
        if (sourceArray[i] != expectedArray[i])
            isEqual = 0;
    delete[] sourceArray;
    delete[] expectedArray;

    // Assert
    ASSERT_TRUE(isEqual);
}

TEST(MergeSort, SortWhithMinValue) {

    // Arragne
    int n = 10;
    int *sourceArray = new int[n]{7, 6, 4, 5, 3, 8, 0, 2, 1, INT_MIN};
    int *expectedArray = new int[n]{INT_MIN, 0, 1, 2, 3, 4, 5, 6, 7, 8};

    // Act
    msort(sourceArray, n);
    bool isEqual = 1;
    for (size_t i = 0; i < n; i++)
        if (sourceArray[i] != expectedArray[i])
            isEqual = 0;
    delete[] sourceArray;
    delete[] expectedArray;

    // Assert
    ASSERT_TRUE(isEqual);
}

TEST(MergeSort, SortWhithMinAndMaxValues) {

    // Arrange
    int n = 10;
    int* sourceArray = new int[n] {INT_MAX, INT_MAX, INT_MIN, INT_MIN,
                                   INT_MAX, INT_MIN, INT_MAX, INT_MIN, INT_MAX, INT_MIN};
    int* expectedArray = new int[n] {INT_MIN, INT_MIN, INT_MIN, INT_MIN,
                                     INT_MIN, INT_MAX, INT_MAX, INT_MAX, INT_MAX, INT_MAX};

    // Act
    msort(sourceArray, n);
    bool isEqual = 1;
    for (size_t i = 0; i < n; i++)
        if (sourceArray[i] != expectedArray[i])
            isEqual = 0;
    delete[] sourceArray;
    delete[] expectedArray;

    // Assert
    ASSERT_TRUE(isEqual);
}

TEST(MergeSort, SortWhithAllZero) {

    // Arrange
    int n = 10;
    int* sourceArray = new int[n] {0, 0, 0, 0,
                                   0, 0, 0, 0, 0, 0};
    int* expectedArray = new int[n] {0, 0, 0, 0,
                                     0, 0, 0, 0, 0, 0};

    // Act
    msort(sourceArray, n);
    bool isEqual = 1;
    for (size_t i = 0; i < n; i++)
        if (sourceArray[i] != expectedArray[i])
            isEqual = 0;
    delete[] sourceArray;
    delete[] expectedArray;

    // Assert
    ASSERT_TRUE(isEqual);
}

TEST(MergeSort, SortWhithAllNegative) {

    // Arrange
    int n = 10;
    int* sourceArray = new int[n] {-1, -1, -1, -1,
                                   -1, -1, -1, -1, -1, -1};
    int* expectedArray = new int[n] {-1, -1, -1, -1,
                                     -1, -1, -1, -1, -1, -1};

    // Act
    msort(sourceArray, n);
    bool isEqual = 1;
    for (size_t i = 0; i < n; i++)
        if (sourceArray[i] != expectedArray[i])
            isEqual = 0;
    delete[] sourceArray;
    delete[] expectedArray;

    // Assert
    ASSERT_TRUE(isEqual);
}

TEST(ReverseMergeSort, SortWhithMinValue) {

    // Arragne
    int n = 10;
    int *sourceArray = new int[n]{7, 6, 5, 5, 3, 12, 0, 0, 1, INT_MIN};
    int *expectedArray = new int[n]{12, 7, 6, 5, 5, 3, 1, 0, 0, INT_MIN};

    // Act
    reverseMSort(sourceArray, n);
    bool isEqual = 1;
    for (size_t i = 0; i < n; i++)
        if (sourceArray[i] != expectedArray[i])
            isEqual = 0;
    delete[] sourceArray;
    delete[] expectedArray;

    // Assert
    ASSERT_TRUE(isEqual);
}

TEST(ReverseMergeSort, SortWhithAllNegative) {

    // Arrange
    int n = 10;
    int* sourceArray = new int[n] {-1, -1, -1, -1,
                                   -1, -1, -1, -1, -1, -1};
    int* expectedArray = new int[n] {-1, -1, -1, -1,
                                     -1, -1, -1, -1, -1, -1};

    // Act
    reverseMSort(sourceArray, n);
    bool isEqual = 1;
    for (size_t i = 0; i < n; i++)
        if (sourceArray[i] != expectedArray[i])
            isEqual = 0;
    delete[] sourceArray;
    delete[] expectedArray;

    // Assert
    ASSERT_TRUE(isEqual);
}

TEST(ReverseMergeSort, SortWhithAllZero) {

    // Arrange
    int n = 10;
    int* sourceArray = new int[n] {0, 0, 0, 0,
                                   0, 0, 0, 0, 0, 0};
    int* expectedArray = new int[n] {0, 0, 0, 0,
                                     0, 0, 0, 0, 0, 0};

    // Act
    reverseMSort(sourceArray, n);
    bool isEqual = 1;
    for (size_t i = 0; i < n; i++)
        if (sourceArray[i] != expectedArray[i])
            isEqual = 0;
    delete[] sourceArray;
    delete[] expectedArray;

    // Assert
    ASSERT_TRUE(isEqual);
}

TEST(ReverseMergeSort, SortWhithMinAndMaxValues) {

    // Arrange
    int n = 10;
    int* sourceArray = new int[n] {INT_MIN, INT_MIN, INT_MIN, INT_MIN,
                                   INT_MIN, INT_MAX, INT_MAX, INT_MAX, INT_MAX, INT_MAX};
    int* expectedArray = new int[n] {INT_MAX, INT_MAX, INT_MAX, INT_MAX,
                                     INT_MAX, INT_MIN, INT_MIN, INT_MIN, INT_MIN, INT_MIN};

    // Act
    reverseMSort(sourceArray, n);
    bool isEqual = 1;
    for (size_t i = 0; i < n; i++)
        if (sourceArray[i] != expectedArray[i])
            isEqual = 0;
    delete[] sourceArray;
    delete[] expectedArray;

    // Assert
    ASSERT_TRUE(isEqual);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
