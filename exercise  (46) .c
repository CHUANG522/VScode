#include <stdio.h>
#include <stdlib.h>
struct student
{
    float score;
    struct student* next;
};  // 定义结构体student为数据类型
#define STU struct student  // 宏定义将struct studnet简化写为STU
typedef STU link_node;      // 类型定义：将数据类型STU改写为link_node
/* run this program using the console pauser or add your own getch, system("pause") or input
   loop */
double fun(link_node* h);
link_node* creat_node(float score);  // 创建节点的函数，返回新节点地址
int main(void)
{
    link_node stu1;
    link_node stu2;
    stu1.score = 39;
    stu2.score = 88;

    return 0;
}
double fun(link_node* h)
{
    if (h == NULL || h->next == NULL)
    {
        return -1;
    }
    double sum = 0;  // 总值
    int counter = 0;
    link_node* p = h->next;
    while (p != NULL)
    {
        counter++;
        sum += p->score;
        p = p->next;
    }
    return sum / counter;
}
link_node* creat_node(float score)
{
    link_node* new_node = (link_node*) malloc(sizeof(link_node));
    if (new_node == NULL)
    {
        printf("内存分配失败");
        exit(1);
    }
    new_node->score = score;
    new_node->next = NULL;
    return new_node;
}
void append_node(link_node* head, float score)
{
    link_node* new_node = creat_node(score);
    link_node* p = head;
    while (p->next != NULL)
    {
        p = p->next;
    }
    p->next = new_node;
}