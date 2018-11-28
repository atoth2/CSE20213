/**
 * This file provides the functions that all 3 programs need to display the
 * test output.  You do not need to modify it in any way.
 *
 * by Corey Pennycuff
 */
#include<string>
#include<sstream>

#define RESET   "\033[0m"
#define RED     "\033[37m\033[41m"      /* Red */
#define GREEN    "\033[37m\033[42m"      /* Green */

template <class T1, class T2>
std::string test(const T1& t1, const T2& t2) {
  return t1 == t2 ? ((std::string)GREEN + " PASS " + RESET) : ((std::string)RED + " FAIL " + RESET);
}

template <class T1>
std::string test(const T1& t1) {
  return test(true, t1);
}

std::string tostring(const Fraction & f) {
  std::stringstream s;
  s << f;
  return s.str();
}
