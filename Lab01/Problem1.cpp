#include<Problem1.h>
#include<iostream>

//________1_______

void Swap(int var1, int var2)
{
    int holder = var1;
    var1 = var2;
    var2 = holder;
    std::cout <<"After the swap a = " << var1 << " and b = " << var2 << std::endl;
}

//________2_______

bool Signs(int var1, int var2)
{
    return (var1 >= 0) ^ (var2 < 0);
}

//________3_______

void Even(const int a, int b, int &a1, int &b1)
{
    a % 2 == 0 ? a1 = 0 : a1 = 1;
    b % 2 == 0 ? b1 = 0 : b1 = 1;
}

//________4_______

void First()
{
    std::cout<<"First"<<std::endl;
}

//________5_______

void Display(int ch)
{
      if (ch == 1)
      {
          for (int i = 1; i <= 3; i++)
          {
            std::cout<<"First"<<std::endl;
           }
       }
      if (ch == 2 )
      {
          for (int i = 1; i <= 2; i++)
          {
            std::cout<<"Second"<<std::endl;
           }
       }
}
