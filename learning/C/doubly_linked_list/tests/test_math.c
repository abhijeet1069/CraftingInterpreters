#include "../lib/unity.h"
#include "../include/math_utils.h"

void setUp(void) {}
void tearDown(void) {}

void test_add(void)
{
    TEST_ASSERT_EQUAL_INT(5, add(2, 3));
}

void test_subtract(void)
{
    TEST_ASSERT_EQUAL_INT(2, subtract(5, 3));
}

int main(void)
{
    UNITY_BEGIN();
    RUN_TEST(test_add);
    RUN_TEST(test_subtract);
    return UNITY_END();
}