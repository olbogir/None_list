#include <stdio.h>
#include <stdlib.h>

struct tag_node{
	int a;
	struct tag_node* next;
};

typedef struct tag_node Node;

void add(Node* x)
{
	
};


int main(int argc, char *argv[]) {

Node one;

one.a = 45;
one.next = NULL;

printf("one.a = %d\none.next = %u", one.a, one.next);

	
	
	
	
	return 0;
}



	
/*

void change (int* x, int* y)
{
	x=y;
	printf("   foo   \nptr1 =%d, ptr2 =%d\n\n", x, y);
}

void change_2(int** x, int* y)
{
	*x=y;
		printf("   foo_2   \nptr1 =%d, ptr2 =%d\n\n", x, y);
}

	int var1 = 9999;
	int var2 = 8888;
	int var3 = 7777;
	
	int* ptr1 = &var1;
	int* ptr2 = &var2;
	int* ptr3 = &var3;
	
	int** pptt = &ptr1;
	
	printf("ptr1 =%d, ptr2 =%d\n", ptr1, ptr2);
	printf("ptr1 =%d, ptr2 =%d\n", *ptr1, *ptr2);
//	ptr1=ptr2;
	
	change(ptr1, ptr2);
	printf("ptr1 =%d, ptr2 =%d\n", ptr1, ptr2);
	printf("ptr1 =%d, ptr2 =%d\n", *ptr1, *ptr2);
		
	change_2(pptt, ptr2);
	printf("ptr1 =%d, ptr2 =%d\n", ptr1, ptr2);
	printf("ptr1 =%d, ptr2 =%d\n", *ptr1, *ptr2);
	printf("var =%d, ptr1 =%p, ptr2 =%p\n\n", var1, ptr1, ptr2);
	printf("var_ptr1 = %d; var_ptr2 =%d\n", ptr1, ptr2);
	printf("var_ptr2* =%d\n", *ptr2);
	printf("var_ptr2** =%d\n", *ptr2);*/
