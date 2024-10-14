#include<stdio.h>
#include<stdbool.h>

void Ex_variables_Datatypes()
{
    //unsigned integer
    int marks=100;
    printf("marks=%d\n",marks);
    printf("marks size=%d\n",sizeof(marks));

    //signed integer
    signed int num=18;
    printf("num=%d\n",num);
    printf("size num=%d\n",sizeof(num));

    //long integer
    long  number=500000;
    printf("number=%d\n",number);

    //floating number
    float cgpa=9.8573485784;
     printf("cgpa=%f\n",cgpa);

    //long float
    double sgpa=9.85786887420;
     printf("sgpa=%lf\n",sgpa);

    //character constants
    char sec='B';
     printf("section=%c\n",sec);

     //string constants
     char name[10]="PRATEEK";
     printf("name=%s\n",name);

     //boolean data type
     
     bool isregular=true;
     printf("isregular=%d\n",isregular);

}
void main()
{
    Ex_variables_Datatypes();
}