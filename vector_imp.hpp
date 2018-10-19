#pragma once
#include "vector_def.h"

template<unsigned int size, typename type>
vector<size,type>& vector<size,type>::operator += (const vector<size,type>& other)
{
    for (unsigned int i = 0; i < size; ++i)
        member_array[i] += other[i];
    return *this;
}
