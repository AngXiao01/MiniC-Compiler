int read() {
	int x = 0;
	char ch = getchar();
	while (ch < 30 || ch>39) {
		ch = getchar();
	}
	while (ch >= 30 && ch <= 39) {
		x = x * 10 + ch - 30;
		ch = getchar();
	}
	return x;
}