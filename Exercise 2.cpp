#include<stdio.h>

int isEvenNumber(int num){
	int isEvenNumber;
	return !(num & 1);
}
int main(){
	int n,m,num;
	printf("Please, enter a number \n n: ",n);
	scanf("%d", &n);
	printf("Please, enter a number \n m: ",m);
	scanf("%d", &m);
	printf("The even numbers between 1 and 8: ");
	
	for(num=1;num<8;num++){
		if(num%2==1)
		continue;
		printf("\n%d", num);
	}
    return 0;
	
}
