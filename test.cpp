#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "functions_to_implement.cpp"
#include <vector>
#include <string>

using namespace std;

TEST_CASE("Product function is working", "[Product]")
{
    vector<int> nus = {2, 2, 2};
    REQUIRE(Product(nus) == 8);
    nus.push_back(2);
    REQUIRE(Product(nus) == 16);
}

TEST_CASE("Sum function is working", "[Sum]")
{
    vector<int> nus = {2, 2, 2};
    REQUIRE(Sum(nus) == 6);
    nus.push_back(2);
    REQUIRE(Sum(nus) == 8);
}