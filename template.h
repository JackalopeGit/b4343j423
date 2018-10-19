#pragma once

#include "vector.h"

enum class FunctionEnum
{
   Dummy, Add
};

template<FunctionEnum behaviour>
void foo()
{
    struct Dummy {};
    vector<3, Dummy> vec1, vec2;
    switch (behaviour)
    {
        case FunctionEnum::Dummy:
	  break;
        case FunctionEnum::Add:   vec1+=vec2;
          break;
    }
}
