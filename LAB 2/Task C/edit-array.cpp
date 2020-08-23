/*

Author: Asllan Alija

Course: CSCI-135

Instructor: Genady Maryash

Assignment: Lab 2-C

Allows user to edit array until an invalid index is given.

*/

#include <iostream>
using namespace std;

int main()
{
  int myData[10];
  int idx;
  int newVal;
  // Makes all values of myData 1.
  for (int i = 0; i < 10; i++)
  {
    myData[i] = 1;
  }
  do
  {
    //Prints all values of array with spaces in between each element.
    for (int i = 0; i < 10; i++)
    {
      cout << myData[i] << " ";
    }
    cout << endl << "Input index: ";
    cin >> idx;
    cout << "Input value: ";
    cin >> newVal;

    // CHeck if indicies are valid. If not valid, print out of range message.
    if (idx >= 0 && idx < 10)
      myData[idx] = newVal;
    else
      cout << "Index out of range. Exit." << endl;
  } while(idx >= 0 && idx < 10);
}
