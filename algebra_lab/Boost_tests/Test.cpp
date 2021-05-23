//
// Created by polina on 23.05.2021.
//

#define BOOST_TEST_DYN_LINK
#define BOOST_TEST_MAIN

#include <boost/test/unit_test.hpp>
#include "../Large_Number/Large_Number.h"

struct LN {

    LN() {
        firstNum = new Large_Number();
        secondNum = new Large_Number();
    }

    ~LN() {
        delete firstNum;
        delete secondNum;
    }

    Large_Number *firstNum;
    Large_Number *secondNum;

};

BOOST_FIXTURE_TEST_CASE(Sum, LN)
{
firstNum->value.push_back((unsigned int)(0));
secondNum->value.push_back((unsigned int)(30));
Large_Number result = *firstNum + *secondNum;
cout << result.to_string();
BOOST_CHECK_EQUAL(result.to_string(), "10000001e");

firstNum->value.push_back((unsigned int)(0));
secondNum->value.push_back((unsigned int)(-30));
result = *firstNum + *secondNum;
BOOST_CHECK_EQUAL(result.to_string(), "10000001fffffffe2");

}