#include <stdio.h>

int main()
{
    int studentsID[10] = {3401, 3402, 3403, 3404, 3405, 3406, 3407, 3408, 3409, 3410};
    double scores[10] = {10.7, 20.5, 30.4, 40, 55, 0, 13, 100, 96.3, 99.99};
    int i = 0;
    double sum = 0;
    double mean = 0;
    double max = 0;
    int topScoreID = 0;

    while (i < 10)
    {
        sum = sum + scores[i];
        if (scores[i] > max)
        {
            max = scores[i];
            topScoreID = studentsID[i];
        }
        i++;
    }

    mean = sum/10;
    printf("Mean: %.2lf\n", mean);
    printf("Top of the Class: %d\n", topScoreID);
}
