//#include <stdio.h>
//int main()
//{
//	int a, sum=0,cnt=0;
//	scanf("%d", &a);
//	
//	for(int i=1; sum<=a; i++){
//		sum+=i;
//		cnt++;
//	}
//	
//	printf("%d %d", cnt, sum);
//	
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	for(int i=0; i<=3; i++){
//		for(int j=1; j<=i; j++){
//			printf("*");
//		}
//		printf("\n");
//	}
//	
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int i,j;
//	
//	for(i=1; i<=3; i++){
//		for(j=1; j<=i; j++){
//			printf("*");
//		}
//		printf("\n");
//	}
//	
//	for(i=3; i>=1; i--){
//		for(j=1; j<=i; j++){
//			printf("*");
//		}
//		printf("\n");
//	}
//	
//	return 0;
//	
//}

#include <stdio.h>
int main()
{
	int a;
	scanf("%d", &a);
	
	for(int i=0; i<a; i++){
		for(int j=a; j>i; i--){
			printf(" ");
		}
		printf("\n");
	}
	for(int i=0; i<a; i++){
		for(int j=1; j<=a; j++){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
