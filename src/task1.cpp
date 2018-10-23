unsigned long findValue(unsigned int min, unsigned max) {
	unsigned long res = 1;
	for (unsigned int i = min; i <= max; i++) {
		if (res % i != 0) {
			switch (i) {
			case 4:
				if (res % 2 == 0) res = res * 2;
				else res = res * 4;
				break;
			case 6:
				if (res % 2 == 0) res = res * 3;
				else
					if (res % 3 == 0) res = res * 2;
					else res = res * 6;
				break;
			case 8:
				if (res % 4 == 0) res = res * 2;
				else
					if (res % 2 == 0) res = res * 4;
					else res = res * 8;
				break;
			case 9:
				if (res % 3 == 0) res = res * 3;
				else res = res * 9;
				break;
			case 10:
				if (res % 5 == 0) res = res * 2;
				else
					if (res % 2 == 0) res = res * 5;
					else res = res * 10;
				break;
			case 12:
				if (res % 4 == 0) res = res * 3;
				else
					if (res % 3 == 0) res = res * 2; //ближайшее число, дающее 3, это 9, между 9 и 12 есть 10, значит res делится на 2
					else res = res * 12;
				break;
			case 14:
				if (res % 2 == 0) res = res * 7;
				else res = res * 14;
				break;
			case 15:
				if (res % 3 == 0) res = res * 5;
				else res = res * 15;
				break;
			case 16:
				if (res % 8 == 0) res = res * 2;
				else
					if (res % 2 == 0) res = res * 8;
					else res = res * 12;
				break;
			case 18:
				if (res % 3 == 0) res = res * 3;
				else
					if (res % 2 == 0) res = res * 9;
					else res = res * 18;
				break;
			case 20:
				if (res % 4 == 0) res = res * 5;
				else
					if (res % 2 == 0) res = res * 10;
					else res = res * 20;
				break;
			default:
				res = res * i;
			}
		}
	}
	return res;
}
