#include <stdio.h>

int main()
{
    int num;

    printf("Enter the number of students: ");
    scanf("%d", &num);
    getchar();

    if (num <= 0)
    {
        printf("Invalid number of students. Try again!\n");
        main();
    }

    for (int i = 1; i <= num; i++)
    {
        float attendance, assignment, classtest, midterm, termfinal, totalmark;

        printf("Fill the information for %d No. Student(s): \n", i);
        printf("Enter marks for Attendance (out of 5): ");
        scanf("%f", &attendance);

        printf("Enter marks for Assignment (out of 10): ");
        scanf("%f", &assignment);

        printf("Enter marks for Class Test (out of 15): ");
        scanf("%f", &classtest);

        printf("Enter marks for Midterm (out of 50): ");
        scanf("%f", &midterm);

        printf("Enter marks for Term Final (out of 100): ");
        scanf("%f", &termfinal);

        if (attendance >= 5 && assignment >= 10 && classtest >= 15 && midterm >= 50 && termfinal >= 100)
        {
            printf("Invalid Marks. Try again!\n");
            main();
        }

        totalmark = (((attendance + assignment + classtest + midterm + termfinal) / 180) * 100);

        if (totalmark <= 0 || totalmark >= 100)
        {
            printf("Invalid Mark. Try again!");
            main();
        }

        if (totalmark >= 90 && totalmark <= 100)
        {
            printf("Student %d = A+\n", i);
        }

        else if (totalmark >= 86 && totalmark <= 89)
        {
            printf("Student %d = A\n", i);
        }
        else if (totalmark >= 82 && totalmark <= 85)
        {
            printf("Student %d = B+\n", i);
        }
        else if (totalmark >= 78 && totalmark <= 81)
        {
            printf("Student %d = B\n", i);
        }
        else if (totalmark >= 74 && totalmark <= 77)
        {
            printf("Student %d = B-\n", i);
        }
        else if (totalmark >= 70 && totalmark <= 73)
        {
            printf("Student %d = C+\n", i);
        }
        else if (totalmark >= 66 && totalmark <= 69)
        {
            printf("Student %d = C\n", i);
        }
        else if (totalmark >= 62 && totalmark <= 65)
        {
            printf("Student %d = C-\n", i);
        }
        else if (totalmark >= 58 && totalmark <= 61)
        {
            printf("Student %d = D+\n", i);
        }
        else if (totalmark >= 55 && totalmark <= 57)
        {
            printf("Student %d = D\n", i);
        }
        else
        {
            printf("Student %d = F\n", i);
        }
    }

    return 0;
}
