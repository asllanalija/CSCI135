#pragma once
#include <iostream>

template <class T>
class Three
{
  public:
    Three (T a, T b, T c);
    void printem();
  private:
    T data[3];
};

/* one time we include code into h file */

#include "Three.hxx"
