#pragma once

#include "Human.hpp"

#include <algorithm>
#include <list>
#include <vector>

std::vector< char > foo(std::list< Human >& people)
{
    std::vector< char > ret_v(people.size());
//sol
    std::for_each(people.begin(), people.end(), [](Human& hmn)
    {
        return hmn.birthday();
    });
    std::transform(people.begin(), people.end(), ret_v.rbegin(), [](Human& hmn)
    {
        return hmn.isMonster()? 'n' : 'y' ;
    });
//end
    return ret_v;
}
