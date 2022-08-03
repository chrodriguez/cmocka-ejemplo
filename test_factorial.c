#include <stdarg.h>
#include <stddef.h>
#include <setjmp.h>
#include <cmocka.h>
#include "factorial.h"

static void test_factorial_zero()
{
    assert_int_equal(factorial(0), 1);
}

int main(int argc, char **argv)
{
    const struct CMUnitTest tests[] =
    {
            cmocka_unit_test(test_factorial_zero),
    };

    return cmocka_run_group_tests(tests, NULL, NULL);
}
