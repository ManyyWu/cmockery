#include "run_test.h"

int add(int a, int b) {
  return a + b;
}

int sub(int a, int b) {
  return a - b;
}

UNIT_TEST(add) {
  assert_int_equal(add(3, 3), 6);
  assert_int_equal(add(3, -3), 0);
}

UNIT_TEST(sub) {
  assert_int_equal(sub(3, 3), 0);
  assert_int_equal(sub(3, -3), 6);
}
