#include<stdio.h>
void main()
{
    int marks[]={27,47,58,68};
    int size=sizeof(marks)/sizeof(int);
    for(int i=0;i<size;i++)
    {
        printf("%d\n",marks[i]);
    }

}
