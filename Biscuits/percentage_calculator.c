#include <cs50.h>
#include <stdio.h>

int main(void)
{
    //Ask for the original figure
    double of = get_double("What is the original figure: ");

    //Get discount or percentage amount
    double dis = get_double("To what percentage / discount: ");

    //Convert inputs to floats
    float pf = ((float)dis / (float)100.00) * (float)of;

    string a = "Discount of";
    string b = "percent from";
    string c = "is:";
    //Print results
     printf("%s %f %s %f %s %f\n", a, dis, b, of, c, pf);
}