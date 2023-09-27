#define _CRT_SECURE_NO_WARNINGS 1
/*
注意声明变量的类型，结构体变量，还是结构体指针型变量，访问结构体成员的方法不同。
*/

#include <stdio.h>
#include <stdlib.h>


#define TRUE 1
#define FALSE 0
#define OK 1
#define ERROR 0
#define INFEASIBLE -1
#define OVERFLOW -2
#define MAXQSIZE 5


typedef int Status;
//typedef int QElemType;
typedef char QElemType;



typedef struct {
	QElemType* base;
	int front; //头指针，队非空时指向队头元素 
	int rear; //尾指针，队非空时指向队尾元素的下一位置 
} SqQueue;

//SqQueue Q1;


Status InitQueue(SqQueue* Q);//Initialize an empty list
//Status ClearQueue(LinkQueue Q);
Status QueueEmpty(SqQueue* Q);
Status EnQueue(SqQueue* Q, QElemType e);
QElemType DeQueue(SqQueue* Q);
Status QueueTraverse(SqQueue* Q);


//void main()
//{
//	char c;
//	char e;
//	SqQueue Q1;
//
//	while (1) {
//		printf("Circular Queue Implementation by Sequence(char type)\n");
//		printf("====================================================\n");
//		printf("1. Initialize a queue;        2. EnQueue an element;\n");//初始化队列   为元素设置队列
//		printf("3. DeQueue an element;        4. TraverseDispQueue;\n");//取消元素的队列;  遍历调度队列
//		printf("5. Is a queue empty;          6. Clear a stack;\n");//是否队列为空;    清除堆栈;
//		printf("7. Destroy a queue;           0. Exit;\n");           //销毁队列;
//		printf("====================================================\n");
//		scanf(" %c", &c);
//
//
//		switch (c) {
//		case '1':
//			InitQueue(&Q1);
//			break;
//		case '2':
//			printf("Input an element:\n");//输入一个元素
//			scanf(" %c",&e);
//			if(EnQueue(&Q1, e))
//				printf("EnQueue successfully!\n");
//			else
//				printf("EnQueue failure!\n");
//			break;
//		case '3':/*
//			printf("DeQueue the element %c\n",DeQueue(&Q1));
//			break;*/
//		case '4':
//			QueueTraverse(&Q1);
//			break;
//		case '5':/*
//			if(QueueEmpty(&Q1))
//				printf("Not Empty!\n");
//			else
//				printf("Empty!\n");
//			break;*/
//
//		case '6':
//
//			break;
//		case '0':exit(0);
//		default:
//			printf("Print an incorrect letter;\n");
//			break;
//		}
//
//	}
//
//
//	system("PAUSE");
//
//}
//
//
//
//
//
//
//Status InitQueue(SqQueue* Q)
//{
//
//	Q->base = (QElemType*)malloc(MAXQSIZE * sizeof(QElemType));
//	if (!Q->base) exit(OVERFLOW);
//	Q->front = Q->rear = 0;
//
//	return OK;
//}
//
//
//
//Status EnQueue(SqQueue* Q, QElemType e)//case '2':为元素设置队列
//{
//	Q->base = (QElemType*)malloc(MAXQSIZE * sizeof(QElemType));
//
//	if (!Q->base) exit(OVERFLOW);
//	Q->front = Q->rear = 0;
//
//	return OK;
//
//}
//
//
//QElemType DeQueue(SqQueue* Q)
//{
//
//
//}
//
//
//Status QueueEmpty(SqQueue* Q)
//{
//
//}
//
//
//
//
//
//Status QueueTraverse(SqQueue* Q)
//{
//	int p;
//	p = Q->front;
//	if (QueueEmpty(Q)) {
//		printf("This is an empty queue!");
//		return ERROR;
//	}
//	while ((p) % MAXQSIZE != Q->rear) {
//		printf("%c\t", Q->base[(p) % MAXQSIZE]);
//		p++;
//	}
//	printf("\n");
//	return OK;
//}

