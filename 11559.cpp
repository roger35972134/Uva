#include <iostream>

using namespace std;

const int maxweek = 13 ;
const int maxhotle = 18 ;

int w[maxweek] = {0};
int h[maxhotle] = {0};

bool checkroom(int room[],int week,int people){
	for(int i=0;i<week;i++){
		if(room[i]<people) return false;
	}
	return true;
}

 
int main()
{
	int people , money , hotel , week ;
	while(){
		for(int i=0;i<13;i++) w[i]=0;
		for(int i=0;i<18;i++) h[i]=0;
		int min = 500001 ;
		
		cin>>people>>money>>hotel>> week ;
		
		for(int i=0;i<hotel;i++){
			cin>>h[i];
			for(int j=0;j<week;j++){
				cin>>w[j];
			}
			if(checkroom( w,week,people)){
			//	if(h[i]*people<min) 
					min = h[i]*people;
			}
		}
		if(min<money)
		cout<<min<<endl;
		else
		cout<<"stay home"<<endl;
		
	}
	
	return 0;
}
