#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>// เรีอกข้อมูล บลูรีน จาก stdbool.h // 37
#define ID 101 // 52

int main()

{
    printf("Hello world! from Centered101 \t C Basic \n");
// data 07/12/2024
    printf("--------------------Student Data--------------------\n");
    printf("FirsName: %s, LastName: %s", "Centered101", "Kubphom... \n");
    printf("%s \t %s", "Centered101", "Kubphom... \n");

    printf("Age = %s Years \n ", "16.10");

    printf("Gender = %c \n", 'C');

    printf("GRA: %f \n", 3.75);
    printf("GRA: %.2f \n", 3.75);

    printf("Address: %s, Tel: %s \n", "Hackathon", "0987654321");

    printf("-------------------------------------------------------------------------------------------------------------\n");

// data 07/13/2024
    // ชนิดข้อมูล ชื่อตัวแปร = ค่าเริ่มต้น
    char GENder='m';
    int dol='c';

    printf("%c \n", GENder);
    printf("%c \n", dol);

    // student data
    char name[11]="Center", gender='M';
    int age=16.10;
    float gpa=3.50;
    bool status = true;

    age=17.00;
    gpa=4.00;

    // output data
    printf("Name = %s \n", name);
    printf("Age = %d \n", age);
    printf("Gender = %c \n", gender);
    printf("GPA = %.2f \n", gpa);
    printf("Status = %d \n", status);

    // แสดงแบบ Literal Constant
    printf("Name = %s \n", "Centered101");

    printf("ID = %d \n", ID);

    int battery_max = 100;
    battery_max=50;
    printf("battery = %d \n", battery_max);

    printf("-------------------------------------------------------------------------------------------------------------\n");

    // data
    char NAME[20], GENDER;
    int AGE;
    float GPA;

    // input
    // printf("Input Name = ");
    // scanf("%s",&NAME);
    // printf("Input Age = ");
    // scanf("%d",&AGE);
    // printf("Input Gender = ");
    // scanf(" %c",&GENDER);
    // printf("Input GPA = ");
    // scanf(" %fc",&GPA);

    //output
    printf("-------------------------------------------------------------------------------------------------------------\n");
    printf("Student Name = %s \n", NAME);
    printf("Age = %d \n", AGE);
    printf("Gender = %c \n", GENDER);
    printf("GPA = %.2f \n", GPA);

    printf("-------------------------------------------------------------------------------------------------------------\n");

    int numder1,numder2;
    // printf("Input Numder1 = ");
    // scanf("%d", &numder1);
    // printf("Input Numder2 = ");
    // scanf("%d", &numder2);
    printf("\n");
    printf("Numder1 = %d \n", numder1);
    printf("Numder2 = %d \n", numder2);
    printf("%d + %d = %d \n", numder1,numder2,numder1+numder2);
    printf("%d - %d = %d \n", numder1,numder2,numder1-numder2);
    printf("%d * %d = %d \n", numder1,numder2,numder1*numder2);
    printf("%d / %d = %d \n", numder1,numder2,numder1/numder2);
    printf("%d mod %d = %d \n", numder1,numder2,numder1%numder2);

    printf("-------------------------------------------------------------------------------------------------------------\n");

    int a=5;
    printf("value = %d \n", a);
    printf("++a \n");
    printf("postfix = %d \n", ++a);
    printf("current = %d \n", a);
    printf("\n");
    int b=5;
    printf("value = %d \n", b);
    printf("b++ \n");
    printf("postfix = %d \n", b++);
    printf("current = %d \n", b);
    printf("\n");
    int c=5;
    printf("value = %d \n", c);
    printf("--c \n");
    printf("postfix = %d \n", --c);
    printf("current = %d \n", c);
    printf("\n");
    int d=5;
    printf("value = %d \n", d);
    printf("d-- \n");
    printf("postfix = %d \n", d--);
    printf("current = %d \n", d);


    printf("-------------------------------------------------------------------------------------------------------------\n");

    int x=100;
    x=x+50; // x=150
    printf("x = %d \n", x);

    printf("-------------------------------------------------------------------------------------------------------------\n");

    return 0;
}
