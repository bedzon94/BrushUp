#include <cs50.h>
#include <stdio.h>

int main(void)
{
    //Ask for the original figure
    int of = get_int("What is the original figure: ");

    //Get discount or percentage amount
    int dis = get_int("To what percentage / discount: ");

    //Convert inputs to floats
    float pf = (float)of / (float)dis;

    string a = "Discount of";
    string b = "%""from";
    string c = "is:";
    //Print results
     printf("%s %i %s %i %s %f\n", a, dis,b, of, c, pf);
}