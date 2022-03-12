#include <iostream>
#include <stack>
using namespace std;

int pushed[100000+5];
int poped[100000+5];

int main()
{
	int N;
	cin>>N;

	stack<int> st;

	for(int i=0;i<N;i++)
	{
		int l;
		cin>>l;
		for(int j=0;j<l;j++)
			cin>>pushed[j];

		for(int j=0;j<l;j++)
			cin>>poped[j];

		int push,pop;
		push=pop=0;

		while(pop<l && push<l)
		{
			st.push(pushed[push]);
			push++;

			while(!st.empty() && poped[pop] == st.top())	//注意这里，必须在非空的情况下使用top()方法，组合条件的短路特性正好满足这一点
			{
				st.pop();
				pop++;
			}
		}

		if(pop==l)
			cout<<"Yes"<<endl;
		else
			cout<<"No"<<endl;

		while(!st.empty())	//注意清空辅助栈，这里没清，80分
			st.pop();
	}

	return 0;
}
————————————————
版权声明：本文为CSDN博主「云端FFF」的原创文章，遵循CC 4.0 BY-SA版权协议，转载请附上原文出处链接及本声明。
原文链接：https://blog.csdn.net/wxc971231/article/details/104257451
