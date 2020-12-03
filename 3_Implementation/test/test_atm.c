#include "unity.h"
#include "atm.h"
/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

void test_name(void)
{
  TEST_ASSERT_EQUAL(1, name ("xyz"));
  TEST_ASSERT_EQUAL(0, name ("roy"));
}

void test_pin(void)
{
  TEST_ASSERT_EQUAL(1, pin ("1234"));
  TEST_ASSERT_EQUAL(0, pin ("9876"));
}

void test_otp(void)
{
  TEST_ASSERT_EQUAL(1, otp ("12345"));
  TEST_ASSERT_EQUAL(0, otp ("98765"));
}

void test_selectoption(void)
{
  TEST_ASSERT_EQUAL(1, selectoption (2));
  TEST_ASSERT_EQUAL(0, selectoption (5));
}

void test_accounttype(void)
{
  TEST_ASSERT_EQUAL(1, accounttype ("savings"));
  TEST_ASSERT_EQUAL(0, accounttype ("current"));
}

void test_withdraw(void)
{
  TEST_ASSERT_EQUAL(1, withdraw (1000));
  TEST_ASSERT_EQUAL(0, withdraw (-1500));
  TEST_ASSERT_EQUAL(0, withdraw (6500));
}

void test_deposit(void)
{
  TEST_ASSERT_EQUAL(1, deposit (1000));
  TEST_ASSERT_EQUAL(0, deposit (-1500));
}

void test_anothertransaction(void)
{
  TEST_ASSERT_EQUAL(1, anothertransaction('n'));
  TEST_ASSERT_EQUAL(1, anothertransaction('Y'));
  TEST_ASSERT_EQUAL(0, anothertransaction ('a'));
}



int test_main(void)
{
  /* Initiate the Unity Test Framework */
  UNITY_BEGIN();

  /* Run Test functions */
  RUN_TEST(test_name);
  RUN_TEST(test_pin);
  RUN_TEST(test_otp);
  RUN_TEST(test_selectoption);
  RUN_TEST(test_accounttype);
  RUN_TEST(test_withdraw);
  RUN_TEST(test_deposit);
  RUN_TEST(test_anothertransaction);

  /* Close the Unity Test Framework */
  return UNITY_END();
}
