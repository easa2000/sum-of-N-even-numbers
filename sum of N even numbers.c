//Calculate the sum of squares of N even numbers

#include<stdio.h>
void main()
{
	int n,i,a,sum=0.0;
	printf("\n Enter the value of n: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		if(i % 2 == 0){
			a = pow(i,2);
			sum += a;
		}
	}
	printf("\n 2^2 + 4^2 + 5^2 + ...  = %d ",sum);
}
