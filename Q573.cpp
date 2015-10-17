#include<iostream>
using namespace std;
int main(void){
	int H,U,D,F;
	while((cin >> H >> U >> D >> F)&&H>0)
	{
		double fall=(double)U*F/100;
		int count=0;
		double point=0,up;
		up=(double)U;
		while(++count)
		{
			point+=up;
			if(up<fall&&up>0)
				up=0;
			else if(up>=fall)
				up-=fall;
			if(point>H)
			{
				cout << "success on day " << count << endl;
				break;
			}
			point-=D;
			if(point<0)
			{
				cout << "failure on day " << count << endl;
				break;
			}
		}
	}
	return 0;
}

