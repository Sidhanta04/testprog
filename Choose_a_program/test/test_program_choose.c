#include "unity.h"
#include "program_choose.h"

//Required by the test unity framework
void setUp() {}

//Required by the unity framework
void tearDown() {}

void testing_prime_number(void)
{
    TEST_ASSERT_EQUAL(1, pallindrome(151));
    TEST_ASSERT_EQUAL(0, prime(4));
    TEST_ASSERT_EQUAL(1, perfect(6));
    TEST_ASSERT_EQUAL(24, factorial(4));
}