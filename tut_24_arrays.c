#include <stdio.h>
int main()
{
    // int marks[4] = {45, 87, 56, 34};
    int marks[2][4] = {{45, 87, 56, 34}, {2, 4, 6, 8}}; // two-d array

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("The value of %d,%d element of the array is %d\n",i,j,marks[i]);
        }
    }

    // for (size_t i = 0; i< 2; i++)
    // {
    //     printf("Enter the value of %d element of the array\n",i);
    //     scanf("%d",&marks[i]);
    // }
    // for (size_t i = 0; i< 4; i++)
    // {
    //     printf("The value of %d element of the array is %d\n",i,marks[i]);

    // }

    // marks[0]=32;
    // printf("marks of student 1 is %d",marks[0]);
    // marks[0]=3;
    // marks[1]=24;
    // marks[2]=28;
    // marks[3]=32;
    // printf("marks of student 1 is %d",marks[0]);

    return 0;
}
