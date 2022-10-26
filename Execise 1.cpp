#include<stdio.h>

int main(){
	int isEvenNumber;
    int a;
    printf("Nhap vao so a: ");
    scanf("%d", &a);
    if (a % 2 == 0) {
       printf("%d la so chan\n", a);
    } else {
       printf("%d is equal to 0", a);
   }
   return 0;
}
