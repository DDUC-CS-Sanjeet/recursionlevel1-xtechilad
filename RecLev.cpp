#include <bits/stdc++.h>
using namespace std;

int FACTit(int num);
int FACTrec(int num1);
int GCDit(int par1,int par2);
int GCDrec(int par3,int par4);
int POWERit(int val,int exp);
int POWERrec(int val1,int exp1);
void FIBOit(int numa);
int FIBOrec(int base);

int main()
{
	int a,b,numb1,numb2,numb3,numb4,numb5,numb6,numb7,numb8,temp,temp1;
	int choice;
	int i;
	int numx,numy;
	char ch;
	cout << "\nMENU:";
	cout << "\n1.Calculate factorial using iteration.";
	cout << "\n2.Calculate factorial using recursion.";
	cout << "\n3.Calculate GCD using iteration.";
	cout << "\n4.Calculate GCD using recursion.";
	cout << "\n5.Calculate the power using iteration.";
	cout << "\n6.Calculate the power using recursion.";
	cout << "\n7.Print Fibonacci series using iteration.";
	cout << "\n8.Print Fibonacci series using recursion.";
	do
	{
		cout << "\nEnter your choice:";
    	cin >> choice;
		switch (choice)
	    	{
			    case 1:
		        	cout << "\nCalculate factorial using iteration.";
	    	    	cout << "\nEnter the number:";
		        	cin >> a;
		        	temp=a;
		        	cout << "The factorial of " << temp << " is " << FACTit(a);
		        	break;
		        	
		        case 2:
		        	cout << "\nCalculate factorial using recursion .";
	    	    	cout << "\nEnter the number:";
		        	cin >> b;
		        	temp1=b;
		        	cout << "The factorial of " << temp1 << " is " << FACTrec(b);
		        	break;
		        	
		        case 3:
		        	cout << "\n3.Calculate GCD using iteration.";
		        	cout << "\nEnter the numbers: ";
		        	cin >> numb1 >> numb2;
		        	cout << "\nThe GCD of the numbers is " << GCDit(numb1,numb2);
		        	break;
		        	
		        case 4:
		        	cout << "\n4.Calculate GCD using recursion.";
		        	cout << "\nEnter the numbers: ";
		        	cin >> numb3 >> numb4;
		        	cout << "\nThe GCD of the numbers is " << GCDrec(numb3,numb4);
		        	break;
		        	
		        case 5:
		        	cout << "\n5.Calculate the power using iteration.";
		        	cout << "\nEnter the number: ";
		        	cin >> numb5 >> numb6;
		        	cout << "\nThe answer is " << POWERit(numb5,numb6);
		        	break;
		        	
		        case 6:
		        	cout << "\n6.Calculate the power using recursion.";
		        	cout << "\nEnter the numbers: ";
		        	cin >> numb7 >> numb8;
		        	cout << "\nThe answer is " << POWERrec(numb7,numb8);
		        	break;
		        	
		        case 7:
		        	cout << "\n7.Print Fibonacci series using iteration.";
		        	cout << "\nEnter the number: ";
		        	cin >> numx;
		        	cout << "\nThe series: ";
                    FIBOit(numx);
		        	break;
		        	
		        case 8:
		        	cout << "\n8.Print Fibonacci series using recursion.";
		        	cout << "\nEnter the numbers: ";
		        	cin >> numy;
		        	cout << "\nThe series: ";
                    while(i<numy)
                    {
                    	cout << FIBOrec(i);
                    	i++;
                	}
		        	break;
		        
	        	default:
		        	cout << "\nWRONG CHOICE!!!";
		        	break;
	    	} 
	    cout << "\nDo you wish to continue? ";
	    cin >> ch;
	}while(ch=='y'||ch=='Y');
}

int FACTit(int num)
{
	int fact=1;
	while(num>=2)
	{
		fact=fact*num;
		num--;
	}
	return fact;
}

int FACTrec(int num1)
{
	if(num1>1)
	{
		return num1*FACTrec(num1-1);
	}
	else
	{
		return 1;
	}
}

int GCDit(int par1,int par2)
{
	for(int tem=0;par2!=0;)
	{
		tem=par1;
		par1=par2;
		par2=tem%par2;
	}
	if(par2==0)
	{
		return 1;
	}
	else
	{
		return par1;
	}
}

int GCDrec(int par3,int par4)
{
	int temp=0;
	temp=par3;
	par3=par4;
	par4=temp%par4;
	if(par4==0)
	{
		return 1;
	}
	else
	{
		return GCDrec(par3,par4);
	}
}

int POWERit(int val,int exp)
{
	int value=1;
	for(int count=0;count<exp;count++)
	{
		value=value*val;
	}
	return value;
}

int POWERrec(int val1,int exp1)
{
	if(exp1!=0)
	{
		return val1*POWERrec(val1,exp1-1);
	}
	else
	{
		return 1;
	}
}

void FIBOit(int numa)
{
	int count1=0;
	int sum=0;
	int numba=1, numbb=1;
	cout << numba << "," << numbb;
	while(count1!=(numa-2))
	{
		sum=numba+numbb;
		cout << "," << sum;
		numba=numbb;
		numbb=sum;
		count1++;
	}
}

int FIBOrec(int base)
{
	if(base==0||base==1)
	{
		return 1;
	}
	else
	{
		return (FIBOrec(base-1)+FIBOrec(base-2));
	}
}
