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

			while(!st.empty() && poped[pop] == st.top())	//ע����������ڷǿյ������ʹ��top()��������������Ķ�·��������������һ��
			{
				st.pop();
				pop++;
			}
		}

		if(pop==l)
			cout<<"Yes"<<endl;
		else
			cout<<"No"<<endl;

		while(!st.empty())	//ע����ո���ջ������û�壬80��
			st.pop();
	}

	return 0;
}
��������������������������������
��Ȩ����������ΪCSDN�������ƶ�FFF����ԭ�����£���ѭCC 4.0 BY-SA��ȨЭ�飬ת���븽��ԭ�ĳ������Ӽ���������
ԭ�����ӣ�https://blog.csdn.net/wxc971231/article/details/104257451
