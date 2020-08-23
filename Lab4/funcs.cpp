#include <iostream>
#include <string>
void box(int width, int height)
{
  for (int i = 0; i < height; i++) {
    for (int j = 0; j < width; j++)
      std::cout << "*";
    std::cout << std::endl;
  }
}

void checkerboard(int width, int height)
{
  for (int i = 0; i < height; i++)
  {
    for (int j = i % 2; j < width; j++)
    {
      if ((j+1) % 2 == 1)
	std::cout << "*";
      else
	std::cout << " ";
    }
    std::cout <<  std::endl;
  }
}

void cross(int size)
{
    int i, j;
    std::string out2d[size][size];
    for (i = 0; i < size; i++)
        for (j = 0; j < size; j++)
            out2d[i][j] = " ";
    for (i = 0, j = 0; i < size; i++, j++)
    {
        out2d[i][j] = "*";
        out2d[i][size - j - 1] = "*";
    }
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
            std::cout << out2d[i][j];
        std::cout << std::endl;
    }
}

void lower(int length)
{
    for (int i = 1; i <= length; i++)
    {
        for (int j = 0; j < i; j++)
            std::cout << "*";
        std::cout << std::endl;
    }
}

void upper(int length)
{
    for (int i = 0; i < length; i++)
    {
        for (int j = 0; j < i; j++)
            std::cout << " ";
        for (int k = i; k < length; k++)
            std::cout << "*";
        std::cout << std::endl;
    }
}
