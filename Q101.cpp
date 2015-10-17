#include<iostream>
#include<cstdlib>
#include<string.h>
using namespace std;
int blocks[25][25];
void show(int size)
{
	for(int i=0;i<size;i++)
    	{
			printf("%d:",i);
			for(int j=0;j<size;j++)
			{
				if(blocks[i][j]==-1)
					break;
				printf(" %d",blocks[i][j]);
			}
			cout << endl;
		}
}
int clearmatrix(int k,int size)
{
	for(int j=size-1;j>0;j--)
	{
		if(blocks[k][j-1]==-1)
		{
			blocks[k][j-1]=blocks[k][j];
			blocks[k][j]=-1;
		}
	}
}
void pile_onto(int a,int b,int n)
{
	int count=0;
	int d=0,c=0,e;
			 for(int k=0;k<n;k++)
				for(int j=0;j<n;j++)
					if(blocks[k][j]==a)
              			{
								d=k;
								e=j;
						}
           	 for(int k=0;k<n;k++)
				for(int j=0;j<n;j++)
					if(blocks[k][j]==b)
						c=k;
				if(d==c)
					return;
	for(int i=0;i<n;i++)
     {
             if(blocks[c][i]!=-1)
             {
				while(1)
				{
					int f=blocks[c][i];
              		if(blocks[f][count]==-1)
              		{
						blocks[f][count]=blocks[c][i];
						blocks[c][i]=-1;
						count=0;
						break;
					}
					else
						{
							count++;
						}
				}
             }
     }
	
     for(int i=e;i<n;i++)
     {
             if(blocks[d][i]!=-1)
             {
              	while(1)
				{
              		if(blocks[c][count]==-1)
              		{
						blocks[c][count]=blocks[d][i];
						blocks[d][i]=-1;
						count=0;
						break;
					}
					else
						{
							count++;
						}
				}
             }
     }
     clearmatrix(d,n);
     clearmatrix(c,n);
}
void pile_over(int a,int b,int n)
{
	int count=0;
	int d=0,c=0,e;
			 for(int k=0;k<n;k++)
				for(int j=0;j<n;j++)
					if(blocks[k][j]==a)
              			{
								d=k;
								e=j;
						}
           	 for(int k=0;k<n;k++)
				for(int j=0;j<n;j++)
					if(blocks[k][j]==b)
						c=k;
				if(d==c)
					return;
     for(int i=e;i<n;i++)
     {
             if(blocks[d][i]!=-1)
             {
					count=0;
					
					
              	while(count<n)
				{
					if(blocks[c][count]==-1)
              		{
						blocks[c][count]=blocks[d][i];
						blocks[d][i]=-1;
						count++;
					}
					else
							count++;
				}
             }
     }
     clearmatrix(d,n);
     clearmatrix(c,n);
}
void move_over(int a, int b, int n)
{
	 int count=0;
	 int d=0,c=0,e;
			 for(int k=0;k<n;k++)
				for(int j=0;j<n;j++)
					if(blocks[k][j]==a)
              			{
								d=k;
								e=j;
						}
           	 for(int k=0;k<n;k++)
				for(int j=0;j<n;j++)
					if(blocks[k][j]==b)
						c=k;
				if(d==c)
					return;
     for(int i=0;i<n;i++)
     {
             if(blocks[d][i]!=-1)
             {
              	while(1)
				{
              		if(blocks[c][count]==-1)
              		{
						blocks[c][count]=blocks[d][i];
						blocks[d][i]=-1;
						count=0;
						break;
					}
					else
							count++;
				}
             }
     }
     clearmatrix(d,n);
     clearmatrix(c,n);
     /*for(int i=0;i<n;i++)
     {
		if(blocks[c][i]==-1)
			{
				blocks[c][i]=blocks[d][0];
				break;
			}
		else
			continue;
	 }
     blocks[d][0]=-1;*/
}
void move_onto(int a, int b,int n)
{
	int count=0;
	int d=0,c=0,e;
			 for(int k=0;k<n;k++)
				for(int j=0;j<n;j++)
					if(blocks[k][j]==a)
              			{
								d=k;
								e=j;
						}
           	 for(int k=0;k<n;k++)
				for(int j=0;j<n;j++)
					if(blocks[k][j]==b)
						c=k;
				if(d==c)
					return;
     for(int i=0;i<n;i++)
     {
             if(blocks[d][i]!=-1)
             {
				int f=blocks[d][i];
              	while(1)
				{
              		if(blocks[f][count]==-1)
              		{
						blocks[f][count]=blocks[d][i];
						blocks[d][i]=-1;
						count=0;
						break;
					}
					else
						{
							count++;
						}
				}
             }
     }
     for(int i=0;i<n;i++)
     {
             if(blocks[c][i]!=-1)
             {
				int f=blocks[c][i];
				while(1)
				{
              		if(blocks[f][count]==-1)
              		{
						blocks[f][count]=blocks[c][i];
						blocks[c][i]=-1;
						count=0;
						break;
					}
					else
						{
							count++;
						}
				}
             }
     }
     clearmatrix(a,n);
     clearmatrix(b,n);
     blocks[c][1]=blocks[d][0];
     blocks[d][0]=-1;
}

int main()
{
 	int size;   
    while(scanf("%d",&size)!=EOF)
	{
    char str1[5];
    char str2[5];    
    //Âk¹s 
    for(int i=0;i<size;i++)
		for(int j=0;j<size;j++)
			if(j==0)
				blocks[i][0]=i;
			else
				blocks[i][j]=-1;
	while (scanf("%s",str1)){
	if(!strcmp(str1,"quit"))
	{
		show(size);
		break;
	}
	int a,b;
	scanf("%d %s %d",&a,str2,&b);
	if(a==b)
		continue;
    if(!strcmp(str1,"move"))
    {
		if(!strcmp(str2,"onto"))
    		move_onto(a,b,size);
    	else if(!strcmp(str2,"over"))
    		move_over(a,b,size);
	}
	else if(!strcmp(str1,"pile"))
	{
		if(!strcmp(str2,"onto"))
			pile_onto(a,b,size);
		else if(!strcmp(str2,"over"))
			pile_over(a,b,size);
	}
	}
	}
}
