#include<stdio.h>
#include<ctype.h>

#define MAX 100

int stack[MAX];
int top=-1;

void push(int value)
{
	top++;
	stack[top]=value;
}

int pop()
{
	return stack[top--];
}

int main()
{
	char postfix[100];
	int i,a,b,result;

	printf("ENTER POSTFIX EXPRESSION:");
	scanf("%s",postfix);

	for(i=0;postfix[i]!='\0';i++)
	{
		if(isdigit(postfix[i]))
		{
			push(postfix[i]-'0');
		}
		else
		{
			b=pop();
			a=pop();

			switch(postfix[i])
			{
				case '+':
					result=a+b;
					break;

				case '-':
					result=a-b;
					break;

				case '*':
					result=a*b;
					break;

				case '/':
					result=a/b;
					break;

				case '%':
					result=a%b;
					break;
			}

			push(result);
		}
	}

	printf("RESULT OF POSTFIX EXPRESSION:%d",pop());

	return 0;
}
