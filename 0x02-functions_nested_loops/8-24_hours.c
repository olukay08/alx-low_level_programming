#include "main.h"
/**
 * jack_bauver - print every minutes in of the day of jack-bauver,starts
 * Return :Always 0
 */
void jack_bauer(void)
{
	int h= 0;

	int m= 0;

	int hm;

	int mr;

	while (h < 24)
	{
		while (m < 60)
		{
			hm = h % 10;
			mr =m %10;
			_putchar(h / 10 + '0');
			_putchar(hm + '0');
			_putchar(':');
			_putchar(m /10 + '0');
			_putchar(mr + '0');
			m++;
			_putchar('\n');
		}
		h++;
		m = 0;
	}
}
