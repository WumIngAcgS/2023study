#define _CRT_SECURE_NO_WARNINGS 1
/*
ע���������������ͣ��ṹ����������ǽṹ��ָ���ͱ��������ʽṹ���Ա�ķ�����ͬ��
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
	int front; //ͷָ�룬�ӷǿ�ʱָ���ͷԪ�� 
	int rear; //βָ�룬�ӷǿ�ʱָ���βԪ�ص���һλ�� 
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
//		printf("1. Initialize a queue;        2. EnQueue an element;\n");//��ʼ������   ΪԪ�����ö���
//		printf("3. DeQueue an element;        4. TraverseDispQueue;\n");//ȡ��Ԫ�صĶ���;  �������ȶ���
//		printf("5. Is a queue empty;          6. Clear a stack;\n");//�Ƿ����Ϊ��;    �����ջ;
//		printf("7. Destroy a queue;           0. Exit;\n");           //���ٶ���;
//		printf("====================================================\n");
//		scanf(" %c", &c);
//
//
//		switch (c) {
//		case '1':
//			InitQueue(&Q1);
//			break;
//		case '2':
//			printf("Input an element:\n");//����һ��Ԫ��
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
//Status EnQueue(SqQueue* Q, QElemType e)//case '2':ΪԪ�����ö���
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

