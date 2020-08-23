#include <iostream>
#include <fstream>
#include <cstdlib>
#include <climits>

int main()
{
  std::ifstream fin("Current_Reservoir_levels.tsv");
  if (fin.fail())
  {
    std::cerr << "File cannot be opened for reading." << std::endl;
    exit(1);
  }
  std::string junk;
  std::string date;
  std::string eastSt;
  std::string eastEl;
  std::string westSt;
  std::string westEl;
  std::getline(fin, junk);
  while (fin >> date >> eastSt >> eastEl >> westSt >> westEl)
  {
    fin.ignore(INT_MAX, '\n');
    std::cout << date << " " << eastSt << std::endl;
  }
  fin.close();

  
}
