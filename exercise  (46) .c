#include <stdio.h>
#include <stdlib.h>
struct student
{
    float score;
    struct student* next;
};
#define STU struct student
typedef STU link_node;
/* run this program using the console pauser or add your own getch, system("pause") or input
   loop */
int main(void)
{
    link_node stu1;
    link_node stu2;
    stu1.score = 39;
    return 0;
}
