#include <stdio.h>

#define NUM_STUDENTS 10
#define NUM_SUBJECTS 3

int main() 
{
    int marks[NUM_STUDENTS][NUM_SUBJECTS];
    int totalMarks[NUM_STUDENTS] = {0};
    int highestMarks[NUM_SUBJECTS] = {0};
    int highestRollNoSubject[NUM_SUBJECTS] = {0};  
    int highestTotalMarks = 0;
    int highestTotalRollNo = 0;

    
    printf("Enter the marks for %d students in %d subjects:\n", NUM_STUDENTS, NUM_SUBJECTS);
    for (int i = 0; i < NUM_STUDENTS; i++) 
    {
        printf("Enter marks for Student %d:\n", i + 1);
        for (int j = 0; j < NUM_SUBJECTS; j++) 
        {
            printf("Subject %d: ", j + 1);
            scanf("%d", &marks[i][j]);
        }
    }

    
    for (int i = 0; i < NUM_STUDENTS; i++) 
    {
        totalMarks[i] = 0;
        for (int j = 0; j < NUM_SUBJECTS; j++) 
        {
            totalMarks[i] += marks[i][j];
        }
    }

    
    for (int j = 0; j < NUM_SUBJECTS; j++) 
    {
        highestMarks[j] = marks[0][j];
        highestRollNoSubject[j] = 1;  
        for (int i = 1; i < NUM_STUDENTS; i++) 
        {
            if (marks[i][j] > highestMarks[j]) 
            {
                highestMarks[j] = marks[i][j];
                highestRollNoSubject[j] = i + 1; 
            }
        }
    }

    
    for (int i = 0; i < NUM_STUDENTS; i++) 
    {
        if (totalMarks[i] > highestTotalMarks) 
        {
            highestTotalMarks = totalMarks[i];
            highestTotalRollNo = i + 1; 
        }
    }

    
    printf("\n(a) Total marks obtained by each student:\n");
    for (int i = 0; i < NUM_STUDENTS; i++) 
    {
        printf("Student %d: Total Marks = %d\n", i + 1, totalMarks[i]);
    }

    printf("\n(b) The highest marks in each subject and the student who secured it:\n");
    for (int j = 0; j < NUM_SUBJECTS; j++) 
    {
        printf("Subject %d: Highest Marks = %d (Student %d)\n", j + 1, highestMarks[j], highestRollNoSubject[j]);
    }

    printf("\n(c) The student who obtained the highest total marks:\n");
    printf("Student %d: Highest Total Marks = %d\n", highestTotalRollNo, highestTotalMarks);

    return 0;
}
