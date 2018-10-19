#pragma once


template<unsigned int size, typename type>
struct vector
{
    vector& operator += (const vector& other);
  
    type member_array[size];
};
