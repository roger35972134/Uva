#include<iostream>
#include<stack>
using namespace std;
int main()
{
	string s;
	int n;
	bool isstack;
	cin >> n;
	getline(cin,s);
	for(int i=0;i<n;i++)
	{
		getline(cin,s);
		stack<char> st;
		isstack=true;
		if(s.length()==0){
			printf("Yes\n");
		}
		else{
			for(int j=0;j<s.length();j++)
			{
				if(s[j]=='('||s[j]=='[')
					st.push(s[j]);
				else{
					if(!st.empty())
					{
						if((s[j]==')'&&st.top()=='(')||(s[j]==']'&&st.top()=='['))
							st.pop();
						else
						{
							isstack=false;
							break;
						}
					}
					else
					{
						if(j<s.length())
						{
							isstack=false;
							break;
						}
					}
				}
			}
		}
		if(st.empty()==false)isstack=false;
		if(isstack) cout << "Yes\n";
		else cout << "No\n";
	}
}
