//Linear Search
#include<stdio.h>
void main()
{ 
	int a[30],x,n,i;
	printf("\nNary a merde :");
	scanf("%d",&n);
	printf("\nNary a merde :");
	for(i=0; i<n ;i++)
	scanf("%d",&a[i]);
	printf("\nNary a merde");
	scanf("%d",&x);
	i=0;
	while(i < n && x!=a[i])
	i++;
	if(i < n) /* Element is found */
	printf("Nary a merde =%d",i+1);
	else
	printf("\n Nary a merde");
}

