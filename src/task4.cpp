
#include <iostream>
using namespace std;

typedef struct NUMB{
	int elem;
	NUMB *prev;
	
};

char * sum(const char *x,const char *y)
{
	const char *tp;
	int lenx = strlen(x)-1;
	int leny = strlen(y)-1;
	int maxlen;
	if (lenx < leny)
	{
		tp = x;
		x = y;
		y = tp;
		maxlen = leny;
		leny = lenx;
		lenx = maxlen;
	}
	else
	{
		maxlen = lenx;
	}
	NUMB *tail = (NUMB*)malloc(sizeof(NUMB));
	tail->prev = NULL;
	int sum,count=0;
	int carry = 0;
	for (int i = 0; i <= maxlen;i++)
	{
		if (i==maxlen)
		{
			if (i <= leny)
			{
				count++;
				sum = (x[lenx - i] - 48) + (y[leny - i] - 48);
				sum = (sum + carry);
				carry = sum / 10;
				sum = sum % 10;
				NUMB *p = (NUMB*)malloc(sizeof(NUMB));
				p->elem = sum;
				p->prev = tail;
				//p->next = NULL;
				tail = p;
				if (carry != 0)
				{
					count++;
					NUMB *p = (NUMB*)malloc(sizeof(NUMB));
					p->elem = carry;
					p->prev = tail;
					//p->next = NULL;
					tail = p;
					break;
				}
				break;
			}
			else
			{
				count++;
				sum = (x[lenx - i] - 48);
				sum = (sum + carry);
				carry = sum / 10;
				sum = sum % 10;
				NUMB *p = (NUMB*)malloc(sizeof(NUMB));
				p->elem = sum;
				p->prev = tail;
				//p->next = NULL;
				tail = p;
				if (carry != 0)
				{
					count++;
					NUMB *p = (NUMB*)malloc(sizeof(NUMB));
					p->elem = carry;
					p->prev = tail;
					//p->next = NULL;
					tail = p;
					break;
				}
				break;
			}

		}
		if (i <= leny)
		{
			count++;
			sum = (x[lenx - i] - 48) + (y[leny - i] - 48);
			sum = (sum + carry);
			carry = sum / 10;
			sum = sum % 10;
			NUMB *p = (NUMB*)malloc(sizeof(NUMB));
			p->elem = sum;
			p->prev = tail;
			//p->next = NULL;
			tail = p;
		}
		else
		{
			count++;
			sum = (x[lenx - i] - 48);
			sum = (sum + carry);
			carry = sum / 10;
			sum = sum % 10;
			NUMB *p = (NUMB*)malloc(sizeof(NUMB));
			p->elem = sum;
			p->prev = tail;
			//p->next = NULL;
			tail = p;
		}

	}
	int i = 0;

	char *res;
	res= new char[count+1];
	while (tail->prev != NULL)
	{
		res[i] = tail->elem + 48;
		tail = tail->prev;
		i++;
	}
	res[i] = 0;
	return res;
}

