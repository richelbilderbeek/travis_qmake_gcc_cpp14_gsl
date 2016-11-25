#include <iostream>

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Weffc++"
#include <gsl/gsl>
#pragma GCC diagnostic pop

//C++14
auto f() noexcept
{
  return "Hello world\n";
}

void g(const int i)
{
  Expects(i >= 0);
  const int j = i * 2;
  Ensures(j > i);
}

int main()
{
  std::cout << f();
  g(50);
}
