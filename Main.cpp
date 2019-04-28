#include "Person.cpp"
#include <cmath>
#include <iostream>
#include "stdDev.cpp"
#include "Person.hpp"
int main()
{
const double EPS = 0.00001;

Person a("alice",92);
Person b("bernice", 77);
Person array[] = {a,b};
double result = stDev(array, 2);
ASSERT_TRUE(fabs(result-7.5)< EPS);
return 0;
}
