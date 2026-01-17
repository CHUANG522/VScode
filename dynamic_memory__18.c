#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {

	int *p = NULL;    // 第一步创建指针并使指针指空
	printf("%p \n", p);
//	int arr[] = {0};
	int arr_len = 20;   // 第二步，初步确定数组长度，以后可以随便修改
	p = (int *)malloc (arr_len * sizeof(int) ); //第三步：进行动态内存申请，p 得到申请内存块的地址 
   //                                                //使用sizeof确定元素大小，再以数组长度相乘得内存块的大小
	if(p == NULL){     		//第四步：if语句判断申请是否成功，perror函数可以输出错误原因，return 1 强制程序结束
		perror ("申请内存出错，原因：");
		return 1;                        
	}
	for (int i = 0; i < arr_len; i++) {
		*(p + i) = i * 10;
	}
	for (int k = 0; k < arr_len; k++) {
		printf("%d \n", *(p + k));
	}
	free(p);    //第五步：释放动态内存，将野指针p置空（此时p仍指向内存块但内存块以被释放）
	p = NULL;
	printf("%p \n", p);



	return 0;
}
