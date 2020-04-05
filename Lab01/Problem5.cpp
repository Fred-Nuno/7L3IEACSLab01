#include<Problem5.h>
#include<iostream>

void Transpose(int Mx[N][N])
{
    //int i,j,k;
    int Tr[5][N];
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            Tr[i][j] = Mx[j][i];
            std::cout<<Tr[i][j]<<" ";
        }
        std::cout<<std::endl;
    }
}


void Trans_Array(int Mx[N][N], int * Arr)
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            Arr[i+j] = Mx[j][i];
            std::cout<<Arr[i+j]<<" ";
        }
    }
    std::cout<<std::endl;
}


// ____Pascal Triangle_____

void Pascal()
{
    int i,j,k;
    int length = 6;
    for(i=1;i<=length;i++)
    {
        for(j=1;j<=length-i;j++)
        std::cout<<" ";
        for(k=1;k<i;k++)
        {
            std::cout<<k;

         }
        for(k=i;k>=1;k--)
        {
            std::cout<<k;

        }
    std::cout<<std::endl;
    }
}
