#include<iostream>
#include<stack>
using namespace std;
stack<int>s;
stack<int>minstk;
void push(int x)
{
	if(s.size()==0)
	{
	 s.push(x);
	 minstk.push(x);
    }
    else{
    	if(x <=minstk.top())
    	{
    	   minstk.push(x);
    	   s.push(x);
        }
        else
		s.push(x);	   
	}
}
void peek()
{
	if(s.size()==0) cout<<"NO STACK"<<endl;
	else cout<<"the last enter value is "<<s.top()<<endl;
}
void pop()
{
	if(s.size()==0) cout<<"NO VALUE TO DELETE"<<endl;
	else 
	{
		if(minstk.top()==s.top())
		{
			minstk.pop();
			s.pop();
	    }
	    else s.pop();
	}
}
void getmin()
{
	if(s.size()==0) cout<<"THERE IS NO ELEMENT"<<endl;
	else cout<<"Minimum in stack is "<<minstk.top()<<endl;
	
}
void printstack(stack<int>s1)
{
	cout<<"stack is"<<"  ";
	while(!s1.empty())
	{
		cout<<s1.top()<<" ";
		s1.pop();
	}
	cout<<endl;
}
void stacks()
{
	if(s.size()==0) cout<<"STACK IS EMPTY"<<endl;
	else printstack(s);
}
int main()
{
	int op,n;
	int exitz=1;
    while(exitz)
    {
	cout<<"1:PUSH    2:POP   3:Get Minimum  4:PEEK  5:PRINT Stack  6:exit "<<endl;
	cout<<"Enter the option: "<<endl<<endl;
	cin>>op;
	switch(op){
	  case 1:
	  cout<<"enter element to push:"<<endl;
	  int x;
	  cin>>x;
	  push(x);
	  break;
	case 2:
	  pop();
	  break;
	case 3:
	  getmin();
	  break;
	case 4:
	  peek();
	  break;
	case 5:
	  stacks();
	  break;
	case 6:
	   exitz=0;
	   break;    
	default:
	   cout<<"--Enter the correct option---"<<endl; 
	   break; 	
	}
}

	return 0;
}
