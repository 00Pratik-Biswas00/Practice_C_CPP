#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int marks_summation(int* marks, int number_of_students, char gender) 
{
       int pratik=0,chandrima=0;
       for (int student = 0; student < number_of_students; student++) 
       {
              pratik+=marks[student];
              student+=1;
       }
       for (int student = 1; student < number_of_students; student++) 
       {
              chandrima+=marks[student];
              student+=1;
       }
       if(gender=='b')
              return pratik;
       else if(gender=='g')
              return chandrima;
       else
              return 0;
}

int main() 
{
       int number_of_students;
       char gender;
       int sum;
       scanf("%d", &number_of_students);
       int *marks = (int *) malloc(number_of_students * sizeof (int));
       for (int student = 0; student < number_of_students; student++) 
       {
              scanf("%d", (marks + student));
       }
       scanf(" %c", &gender);
       sum = marks_summation(marks, number_of_students, gender);
       printf("%d", sum);
       free(marks);
       return 0;
}