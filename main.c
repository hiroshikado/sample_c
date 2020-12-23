#include <stdio.h>

int main(void)
{
	enum week {
		Mon,
		Tue,
		Wed,
		Thu,
		Fri,
		Sat,
		Sun
	};
	
	enum week wk0, wk1, wk2;
	
	wk0 = Mon;
	wk1 = Tue;
	wk2 = Wed;
	
	printf("Monの値は: %d\n", wk0);
	printf("Tueの値は: %d\n", wk1);
	printf("Wedの値は: %d\n", wk2);

	return 0;
}