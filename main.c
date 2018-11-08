#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int x=10;
	int y=20;
	int *ptr;
	
	ptr=&x;
	printf("ptr value :%d\n",*ptr);
	
	ptr=&y;
	printf("ptr value :%d\n",*ptr);
	
	ptr=&x; //*ptr =&x -> 포인터값의 주소를 나타내는 것 
	
	*ptr=20;
	printf("x value : %d\n",x);
	
	return 0;
}
