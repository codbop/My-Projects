#include <stdio.h>
#include <stdlib.h>

#define NUM_STUDENTS 5
#define NUM_GRADES 3

int main()
{
    int i, j, sum;
    //initialize the array
    int grades[NUM_STUDENTS][NUM_GRADES] = {{35, 50, 68},
                                            {15, 60, 29},
                                            {55, 75, 29},
                                            {95, 70, 69},
                                            {43, 74, 56}};

    // print grades table
    printf("Student\tExam1\tExam2\tExam3\tAverage\n");

    for(i = 0; i < NUM_STUDENTS; i++)
    {
        printf("%d\t", i+1);

        sum = 0;
        for(j = 0; j < NUM_GRADES; j++)
        {
            printf("%d\t", grades[i][j]);
            sum += grades[i][j];
        }

        printf("%.2f\n", (float)sum/NUM_GRADES);
    }

    return 0;
}
