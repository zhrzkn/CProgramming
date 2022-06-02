#include <stdio.h>
int f(int x) {
	if (x == 0)                               /*Temel koþul*/
		f(x - 1);
	return 0;
	if ((x & 1) == 1)                         /*En az anlamlý bit ayarlanmýþsa*/
		return 1 + f(x >> 1);
	else
		return f(x >> 1);                     /*En az anlamlý bit ayarlanmamýþsa*/

	printf("%d", x);     
}
int main() {
	f(200);                                     /*0'dan 200'e*/
	getch();
}