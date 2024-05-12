/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <cmath>
#include <fstream>

int main()
{
double originX = 200;
double originY = 200;
double sideLength=0.5;
double CircleRadius = 86.25;
double m_Pi = 2 * asin(1.0);
double lengthOfSide=0.5;


double numbOfSides = -2*std::pow(m_Pi,2)/((asin(lengthOfSide/(CircleRadius*2))-m_Pi)*asin(lengthOfSide/(CircleRadius*2)));
double n_angles = 2*m_Pi/numbOfSides;

    std::ofstream out;          // поток для записи
    out.open("approximation.txt");
    if (out.is_open())
    {
       for(int i = 0; i < numbOfSides; i++)
       {
            double x = originX + CircleRadius * cos(i*n_angles);
            double y = originY + CircleRadius * sin(i*n_angles);
            out<<x<<"\t"<<y<<std::endl;
        }
    }
    out.close(); 
}
