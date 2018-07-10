#include<stdio.h>
void fun(int);
int main(void){
	int in;
	while(1==1){
		printf("Give me a number 1~20: ");
		scanf("%d", &in);
		fun(in);
	}
	return 0;
}
void fun(int n){
	if(n>20 || n <1){
		puts("range: 1~20");
		return;
	}
	int buf[20]={1};
	int i, j;
	for(i=0;i<n;i++){
		for(j=i;j>0;j--) buf[j] = buf[j] + buf[j-1];
		for(j=0;j<n-i;j++)printf("");
		for(j=0;j<=i;j++) printf("%d", buf[j]);
	//	printf("\n");
	}
}
