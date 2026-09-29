#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Here I used short specially because I think we'll use small numbers
    short coordinate_x;
    short coordinate_y;

    printf("Please enter the coordinate x:");
    scanf("%hd", &coordinate_x);
    printf("Please enter the coordinate y:");
    scanf("%hd", &coordinate_y);
    //printf("coordinate x = %hd \n", coordinate_x);
    //printf("coordinate y= %hd", coordinate_y);


    if (coordinate_x == 0 && coordinate_y == 0)
    {
        printf("The point is at the center");

    }
    else
    {
       if (coordinate_x == 0 && coordinate_y != 0 )
       {
           printf(" The point lies on the Y-axis");

       }
       else if (coordinate_x != 0 && coordinate_y == 0)
        {
           printf("The point lies on the X-axis");

       }
       else if (coordinate_x > 0 && coordinate_y > 0)
       {

           printf("The point is at the quadrant 1");
       }
       else if (coordinate_x < 0 && coordinate_y > 0)
       {

           printf("The point is at the quadrant 2");
       }
        else if (coordinate_x < 0 && coordinate_y < 0)
       {

           printf("The point is at the quadrant 3");
       }
        else if (coordinate_x > 0 && coordinate_y < 0)
       {

           printf("The point is at the quadrant 4");
       }

    }

    return 0;
}
