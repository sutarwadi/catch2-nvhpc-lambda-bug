#include <catch2/catch_test_macros.hpp>
#include <catch2/catch_session.hpp>

int main()
{
  Catch::Session session;
  return session.run();
}

TEST_CASE("Unevaluated Lambda", "[all]")
{
  REQUIRE([]() { return true; }());
}
