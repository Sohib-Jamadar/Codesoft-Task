#include<iostream>
using namespace std;
int main()
{
	char operation;
 	double num1,num2;
	 
	 cout<<"enter operation(+,-,/,*):";
	 cin>>operation;
	 cout<<"enter two numbers:";
	 cin>>num1>>num2;
	 
	 switch(operation)
	 {
	 	case '+':
	 		cout<<num1+num2;
	 		break;
	 	case '-':
	 		cout<<num1-num2;
	 		break;
		case '*':
	 		cout<<num1*num2;
	 		break;
		case '/':
			if(num2!=0)
			{
				cout<<num1/num2;
				break;
			}
			else
			{
				cout<<"error";
			}
			break;
		default:
			cout<<"Invalid operation";
	
		}
	return 0;	
}