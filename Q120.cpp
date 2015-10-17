#include<iostream>
#include<algorithm>
using namespace std;

void reverse(int *p,int index)
{
	for(int i=0;i<=index/2;i++)
	{
		swap(p[i],p[index-i]);
	}
} 
int main()
{
	char str[150];
	while(gets(str))
	{
		int pie[35];
		int index=0,num=0;
		while(str[index]!=0)
		{
			char tmp[35];
			int i=0;
			while(str[index]!=' '&&str[index]!=0)
				tmp[i++]=str[index++];
			tmp[i]=0;
			pie[num++]=atoi(tmp);
			if(str[index]==' ')
				index++;
		}
		
		printf("%s\n",str);
		int temp[35];
		for(int i=0;i<num;i++)
			temp[i]=pie[i];
		for(int i=0;i<num;i++)
			for(int j=i+1;j<num;j++)
				if(pie[i]>pie[j])
					swap(pie[i],pie[j]);
		
		index=num-1;
		while(index>-1)
		{
			if(temp[index]!=pie[index])
			{
				if(temp[0]==pie[index])
				{
					printf("%d ",num-index);
					reverse(temp,index);
				}
				else{
					for(int i=0;i<num;i++)
						if(temp[i]==pie[index]){
							printf("%d ",num-i);
							reverse(temp,i);
							reverse(temp,index);
						}
				}
			}
			index--;
		}
		printf("0\n");
	}
}
