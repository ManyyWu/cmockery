#include "cmockery.h"

TEST_DECLARE(add)
TEST_DECLARE(sub)

TEST_LIST_START(unit_tests_entry)
  TEST_ENTRY(add)
  TEST_ENTRY(sub)
TEST_LIST_END
