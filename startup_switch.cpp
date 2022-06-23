#include <stdio.h>
#include "startup.h"
#include "print.h"
void stat()
{	
	while (1)
	{
		switch (get_input())
		{
		case 1: {
			print_add();

		}
		case 2: {
			print_del();

		}
		case 3: {
			print_update();

		}
		case 4: {
			print_show();

		}
		case 5: {
			print_save();

		}
		case 6: {
			print_chfile();
		}
		case 0:
			break;
	}
}