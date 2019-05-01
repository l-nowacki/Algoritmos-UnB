#include <stdio.h>

struct student
{
    char name[50];
    int age;
};

// function prototype
void display(struct student s);
struct student enter_student();

int main()
{
    struct student s;

    s = enter_student();
    
    display(s);   // passing structure as an argument
    
    return 0;
}

struct student enter_student() {
  struct student s1;

    printf("Enter name:");
    scanf ("%[^\n]%*c", s1.name);

    printf("Enter age:");
    scanf("%d", &s1.age);
}


void display(struct student s) 
{
  printf("\nDisplaying information\n");
  printf("Name: %s", s.name);
  printf("\nRoll: %d", s.age);
}
