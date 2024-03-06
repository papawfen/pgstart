#include <check.h>
#include "../quadratic_equation.h"

START_TEST(two_roots_1) {
    double res[2] = {-5.0, -9.0};
    double *my_res = quadratic_equation(1, 14, 45);
    ck_assert_double_eq_tol(res[0], my_res[0], 6);
    ck_assert_double_eq_tol(res[1], my_res[1], 6);
}

START_TEST(two_roots_2) {
    double res[2] = {-1.0, 2.33333333};
    double *my_res = quadratic_equation(-3, 4, 7);
    ck_assert_double_eq_tol(res[0], my_res[0], 1e-06);
    ck_assert_double_eq_tol(res[1], my_res[1], 1e-06);
}

START_TEST(one_root_1) {
    double res[2] = {3, 3};
    double *my_res = quadratic_equation(1, -6, 9);
    ck_assert_double_eq_tol(res[0], my_res[0], 1e-06);
    ck_assert_double_eq_tol(res[1], my_res[1], 1e-06);
}

START_TEST(one_root_2) {
    double res[2] = {1.5, 1.5};
    double *my_res = quadratic_equation(4, -12, 9);
    ck_assert_double_eq_tol(res[0], my_res[0], 1e-06);
    ck_assert_double_eq_tol(res[1], my_res[1], 1e-06);
}

START_TEST(no_root_1) {
    double *my_res = quadratic_equation(2, -3, 5);
    ck_assert_ptr_null(my_res);
}

START_TEST(no_root_2) {
    double *my_res = quadratic_equation(1, 4, 9);
    ck_assert_ptr_null(my_res);
}

int main(void) {
  Suite *s1 = suite_create("Core");
  TCase *tc1_1 = tcase_create("Core");
  SRunner *sr = srunner_create(s1);
  int nf;

  suite_add_tcase(s1, tc1_1);
  tcase_add_test(tc1_1, two_roots_1);
  tcase_add_test(tc1_1, two_roots_2);
  tcase_add_test(tc1_1, one_root_1);
  tcase_add_test(tc1_1, one_root_2);
  tcase_add_test(tc1_1, no_root_1);
  tcase_add_test(tc1_1, no_root_2);
  srunner_run_all(sr, CK_ENV);
  nf = srunner_ntests_failed(sr);
  srunner_free(sr);

  return nf == 0 ? 0 : 1;
}


