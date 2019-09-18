#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// create a student
struct Student{
  char name[50];
  char major[50];
  int age;
  double gpa;
};

int main() {
  
  // assign values to created student
  struct Student student;
  student.age = 23;
  student.gpa = 4.0;
  strcpy(student.name, "Jon");
  strcpy(student.major, "Computer Science");

  printf("%s\n", student.name);
  printf("%s", student.major);

  return 0;
}