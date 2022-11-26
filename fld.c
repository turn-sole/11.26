#include<stdio.h>
//struct S
//{
//	int n;
//	int arr[0];
//};
//int main()
//{
//	struct S* ps = malloc(sizeof(struct S) + 10 * sizeof(int));
//	ps->n = 10;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		ps->arr[i] = i;
//	}
//	struct S* ptr = (struct S*)realloc(ps, sizeof(struct S) + 20 * sizeof(int));
//	if (ptr != NULL)
//	{
//		ps = ptr;
//	}
//	free(ps);
//	ps = NULL;
//}
