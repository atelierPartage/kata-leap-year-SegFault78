/*
** EPITECH PROJECT, 2017
** is_leap_year
** File description:
** A program that performs infinite operations.
*/
#include <criterion/criterion.h>

int is_leap_year (int year)
{
  if (( year % 4 == 0 && year % 100 != 0 ) || year % 400 == 0)
    return (1);


  return (0);
}

/*
Test(is_leap_year, 2018)
{
	cr_assert(is_leap_year(2018));
}


Test(is_leap_year, 2018)
{
	cr_assert(is_leap_year(2018));
}

Test(is_leap_year, 4)
{
	cr_assert(is_leap_year(4));
}


Test(is_leap_year, 2016)
{
	cr_assert(is_leap_year(2016));
}


Test(is_leap_year, 2012)
{
	cr_assert(is_leap_year(2012));
}
*/
