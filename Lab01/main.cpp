#include <iostream>
#include<stdlib.h>

#include"Problem1.h"
#include"Problem2.h"
#include"Problem3.h"
#include"Problem4.h"
#include"Problem5.h"


int main()
{
//    //Problem__1___________1__________

//    int a,b=0;
//    std::cout<<"Enter the value of a: ";
//    std::cin>>a;
//    std::cout<<"Enter the value of b: ";
//    std::cin>>b;
//    std::cout<<"Before the swap a = " << a << " and b = " << b << std::endl;
//    Swap(a, b);

//    //___________________2___________

//    if (Signs(a, b) == true)
//       std::cout<<"Signs are the same!"<<std::endl;
//    else
//        std::cout<<"Signs are opposite"<<std::endl;

//    //___________________3___________

//    int ch_a,ch_b;
//    Even(a, b, ch_a, ch_b);

//    if (ch_a == 0)
//       std::cout<< a <<" Is Even!"<<std::endl;
//    if (ch_a == 1)
//        std::cout<< a <<" Is Odd!"<<std::endl;
//    if (ch_b == 0)
//        std::cout<< b <<" Is Even!"<<std::endl;
//    if (ch_b == 1)
//        std::cout<< b <<" Is Odd!"<<std::endl;

        // _________________4_____________

//    First();
        // _________________5_____________

//    int c = 0;
//    std::cout<<"Enter 1 for First display or 2 for Second display : ";
//    std::cin>>c;
//    Display(c);


    //Problem__2_________________

//    float * X = new float[11];

//    Funct_Maths(X);

//    for (int i = 0; i < 10 ; i++) {
//        std::cout <<"F ("<< i+1 <<") = "<<X[i+1]<< std::endl;
//    }

//    free(X);


    //Problem__3_________________

//   std::cout<<"Before the swap a = " << a << " and b = " << b << std::endl;
//    Swap_one(&a, &b);
//    std::cout<<"After the swap a = " << a << " and b = " << b << std::endl;

//    Swap_two(a, b);
//    std::cout<<"After the swap a = " << a << " and b = " << b << std::endl;

    //Problem__4_________________

//    int size = 10000;
//    int * My_Array = new int[size];

//    srand(time(NULL));

//    for(int i = 0; i < size; i++)
//    {
//        My_Array[i] = rand() % 1000;
//       // std::cout << My_Array[i] << std::endl;
//    }
//    clock_t startTime = clock();

//    //Bubble_Sort(My_Array,size); // Calling the Bubble sort Function

//    Quick_Sort(My_Array, 0, size-1); // Calling the Quick sorting Function

//    clock_t endTime = clock();
//    clock_t duration = (endTime - startTime)/CLOCKS_PER_SEC;

//    //Printing the sorted Array
//    for (int i=0; i < size; i++)
//    {
//    std::cout<<My_Array[i]<<std::endl;
//    }

//    //Display the time the sorting took!
//    std::cout<<"Sorting time is : "<<duration*1000<<" ms"<<std::endl;
//    free(My_Array);


    //Problem__5_________________


    const int row = 5;
    const int col = 5;
    int Matrix[row][col];
    int* Array = new int[N*N];

    srand(time(NULL));

    for(int i = 0; i < row; i++)
     {
      for(int j = 0; j < col; j++)
      {
        Matrix[i][j] = rand() % 10;
        std::cout<<Matrix[i][j]<<" ";
      }
      std::cout<<std::endl;
     }

    std::cout<<std::endl;
    std::cout<<std::endl;

      Transpose(Matrix); // Matrix Transpose function call


     Trans_Array(Matrix, Array); // Tansform Matrix into array function call


//______ Pascal's Triangle____________


      Pascal();

    return 0;
}
