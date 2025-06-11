#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "primeira.cpp"

TEST_CASE("Faz o somatório dos números de uma sequência"){
    int seq[] = { 1, 2, 3, 4 };
    int abc[] = { 1, 2, 3, 4, 5 };
    CHECK(somatorio(4, seq) == 10);
    CHECK(somatorio(5, abc) == 15);
}