int main()
{
	setlocale(LC_ALL, "rus");
	char* x = new char[21];
	char* y = new char[21];
	char* not_x = new char[21];
	char* not_y = new char[21];
	char * S;
	for (int i = 0; i < 20; i++) {
		x[i] ='0';
		y[i] = '0';
	} 
	cout << "Введите первое число\n";
	cin >> not_x;
	for(int i=0;i<strlen(not_x);i++)
		*(x + 20- strlen(not_x) + i) = *(not_x+i);
	x[20] = '\0';
	cout << "Введите второе число\n";
	cin >> not_y;
	for (int i = 0; i<strlen(not_y); i++)
		*(y + 20 - strlen(not_y) + i) = *(not_y + i);
	y[20] = '\0';
	cout <<'\n';
	
	S=sum(x, y);
	cout << "Результат сложения:\n" << S<<"\n";

	
	system("pause");
    return 0;
}