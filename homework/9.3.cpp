/*
  Name: Asllan Alija
  Course: CSCI 135
  Instructor: Genady Maryash

  Assignment: HW E9.3
 */

#include <iostream>
using std::cout;

class LightSwitch
{
  public:
    int up;
    LightSwitch();
};

LightSwitch::LightSwitch()
{
    up = 0;
}
class Circuit
{
  public:
    int on;
    LightSwitch * first;
    LightSwitch * second;
    int get_first_switch_state()
    {
        return first->up;
    } // 0 for down, 1 for up
    int get_second_switch_state()
    {
        return second->up;
    }
    int get_lamp_state()
    {
        if ((first->up == 1 && second->up == 1) || (first->up == 0 && second->up == 0))
            return 0;
        return 1;
    }
    void toggle_first_switch()
    {
        if (first->up == 1)
            first->up = 0;
        else
            first->up = 1;
    }
    void toggle_second_switch()
    {
        if (second->up == 1)
            second->up = 0;
        else
            second->up = 1;
    }
    Circuit();

};

Circuit::Circuit()
{
    first = new LightSwitch;
    second = new LightSwitch;
    on = 0;
}

int main()
{
}
