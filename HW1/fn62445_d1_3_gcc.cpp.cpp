#include <iostream>

using namespace std;
int main()
{
    char operation,number1,number2;
    int number1int,number2int, operationResult;
    cout << "Enter the operation: ";cin>>operation;
    cout << "Enter the first number: ";cin>>number1;
    cout << "Enter the second number: ";cin>>number2;
    // Checking the input data
    if (((number1>=48 && number1<=57)||(number1>=65 && number1<=70))&&((number2>=48 && number2<=57)||(number2>=65 && number2<=70)))
    { //We change number1 and number2 from char to int using the values from the ASCII Table
    if (number1>='A')
    {
        number1int=number1-'A'+10;
    }
    else
    {
        number1int=number1-'0';
    }
    if (number2>='A')
    {
        number2int=number2-'A'+10;
    }
    else
    {
        number2int=number2-'0';
    }
    switch (operation)
	{
	    case '+': operationResult= (number1int + number2int); break;
		case '-': operationResult= (number1int - number2int); break;
		case '*': operationResult= (number1int * number2int); break;
		case '/': operationResult= (number1int / number2int); break;
		case '%': operationResult= (number1int % number2int); break;
		default: return false;
		break;
	}
	if(operationResult<0) return false;// The operation result can only be positive
	else
    {
    cout<< "The operation result: ";
    int tensDigit=operationResult/16;//tensDigit is the digit of the tens
	int unitsDigit=operationResult%16;//unitsDigit is the digit of the units
	//We change tensDigit and unitsDigit from int to char using the values from the ASCII Table
	char leftnumber= tensDigit+'0';
	if(tensDigit>=10)
    {
        leftnumber=tensDigit-10+'A';
    }
    if (leftnumber!='0')
    {
        cout << leftnumber;
    }
    char rightnumber= unitsDigit+'0';
	if(unitsDigit>=10)
    {
        rightnumber=unitsDigit-10+'A';
    }
    cout<<rightnumber;
    }
    }
    else return false;

    return 0;
}
