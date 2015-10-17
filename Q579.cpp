#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	double angle;
	int H,M;
	while(scanf("%d:%d",&H,&M),H||M)
	{
		H=H%12;
		if(M*6>=(H+(double)M/60)*30)
			angle=M*6-(H+(double)M/60)*30;
		else if(M*6<(H+(double)M/60)*30)
			angle=(H+(double)M/60)*30-M*6;
		if(angle>180)
			angle=360-angle;
		printf("%.3f\n",angle);
	}
}
