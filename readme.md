# bug report

```
[ 50%] Building CXX object CMakeFiles/test.dir/test.cpp.o
"/home/jayesh/xlab/lambda/source/test.cpp", line 12: error: a lambda is not allowed in an unevaluated expression
    REQUIRE([]() { return true; }());
    ^

"/home/jayesh/xlab/lambda/source/test.cpp", line 10: warning: variable "<unnamed>::autoRegistrar1" was declared but never referenced
  TEST_CASE("Unevaluated Lambda", "[all]")
  ^

1 error detected in the compilation of "/home/jayesh/xlab/lambda/source/test.cpp".
```
