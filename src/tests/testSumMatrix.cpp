#include "tests.h"

TEST(testSumMatr, Subtest_1) {
  Matrix B(2, 2);
  Matrix A(2, 2);
  Matrix C(2, 2);
  double arr_a[4] = {1, 2, 3, 4};
  double arr_b[4] = {1, 2, 3, 4};
  double arr_C[4] = {2, 4, 6, 8};
  A.FillMatrix(arr_a);
  B.FillMatrix(arr_b);
  C.FillMatrix(arr_C);
  A.SumMatrix(B);
  ASSERT_TRUE(A.EqMatrix(C));
}

TEST(testSumMatr, Subtest_2) {
  Matrix A(5, 3);
  Matrix B;
  Matrix C(5, 3);
  double arr_a[] = {1, 2, 3, 4, 5, 6, 7.1, 0, 0, 0, 0, 0, 0, 0, 0};
  double arr_b[9] = {1, 2, 3, 4, 5, 6, 7.1, 8, 9};
  double arr_C[] = {1, 2, 3, 4, 5, 6, 7.1, 0, 0, 0, 0, 0, 0, 0, 0};
  A.FillMatrix(arr_a);
  B.FillMatrix(arr_b);
  C.FillMatrix(arr_C);
  ASSERT_THROW(A.SumMatrix(B), logic_error);
}

TEST(testSumMatr, Subtest_3) {
  Matrix A(5, 3);
  Matrix B;
  Matrix C;
  double arr_a[9] = {1, 2, 3, 4, 5, 6, 7.1};
  double arr_b[9] = {1, 2, 3, 4, 5, 6, 7.1, 8, 9};
  double arr_C[9] = {1, 2, 3, 4, 5, 6, 7.1, 8, 9};
  A.FillMatrix(arr_a);
  B.FillMatrix(arr_b);
  C.FillMatrix(arr_C);
  ASSERT_THROW(A.SumMatrix(B), logic_error);
}
