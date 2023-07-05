#include <stdio.h>
struct employee {
    int empno;
    char empname[20];
    char address[50];
    int age;
};
int main(){
    struct employee emp;
    printf("Enter employee number: ");
    scanf("%d", &emp.empno);
    printf("Enter employee name: ");
    scanf("%s", emp.empname);
    printf("Enter employee address: ");
    scanf("%s", emp.address);
    printf("Enter employee age: ");
    scanf("%d", &emp.age);
    printf("\nEmployee Details\n");
    printf("Employee Number : %d\n", emp.empno);
    printf("Employee Name : %s\n", emp.empname);
    printf("Employee Address : %s\n", emp.address);
    printf("Employee Age : %d\n", emp.age);
    return 0;
}
