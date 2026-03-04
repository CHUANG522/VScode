// 链表
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
    if (h == NULL || h->next == NULL)  // 空头节点判定
    {
        return -1;
    }
    double sum = 0;  // 总值
    int counter = 0;
    link_node* p = h->next;  // 获取头节点的地址
    while (p != NULL)
    {
        counter++;
        sum += p->score;  // 累加节点中的成绩
        p = p->next;      // 移动指针p指向p所指的节点地址，即指向下一个节点
    }
    return sum / counter;
}
link_node* creat_node(float score)
{
    link_node* new_node = (link_node*) malloc(sizeof(link_node));  // 动态分配内存
    if (new_node == NULL)
    {
        printf("内存分配失败");
        exit(1);  //<stdlib.h>中的exit函数强制停止程序
    }
    new_node->score = score;
    new_node->next = NULL;  // 每创建一个节点都将节点所带地址置空
    return new_node;        // 返回新节点的地址
}
void append_node(link_node* head, float score)
{                                             // 链接函数：将新创建的节点依次接在链表后
    link_node* new_node = creat_node(score);  // 得到新节点的地址
    link_node* p = head;                      // 得到链表头地址
    while (p->next != NULL)
    {
        p = p->next;
    }
    p->next = new_node;  // 链接新节点p指向新节点的地址
}
// free函数释放malloc内存
void link_free(link_node* head)
{
    link_node *p = head, *temp;  // 定义p指向头节点，暂时变量temp
    while (p != NULL)
    {
        temp = p;     // 将当前p的地址暂存在temp中
        p = p->next;  // p指向写一个地址
        free(temp);   // 释放当前地址的内存
    }
}