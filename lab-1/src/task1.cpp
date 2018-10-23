unsigned long findValue(unsigned int min, unsigned max) {
	setlocale(LC_ALL, "rus");
	unsigned long t, a, b;
	a = min;
	b = min+1;
	unsigned long res_b=b;//хранит значение b
	unsigned long res_a;//хранит значение a
	while(res_b!=(max+1)) {
		res_a = a;
		res_b = b;
		while (b != 0) {
			t = b;
			b = a % b;
			a = t;
		}
		a = res_a * (res_b/a);
		res_b ++;
		b=res_b;
	}
	return a;
}
