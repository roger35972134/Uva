#include<iostream>

int main()
{
	int col,up,down,n;
	while(scanf("%d",&n)!=EOF)
	{
		col=0,up=0,down=0;
		int sum=0;
		while(n>sum)
		{
			sum+=++col;
		}
		up=col-(sum-n);
		down=1+(sum-n);
		if(col%2==0)
			printf("TERM %d IS %d/%d\n",n,up,down); 
		else
			printf("TERM %d IS %d/%d\n",n,down,up);
	}
}
