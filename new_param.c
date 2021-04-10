#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
	int i;
	int j;
	char *param;
	char *pargv;
	int *g_cells;

	i = 0;
	j = 0;
	param = (char *)malloc(16);
	g_cells = (int *)malloc(64 * 4);
	pargv = argv[1];
	//printf("%d\n", argc);
	// Prevenção a erro não funciona.
	if ((argc > 1 && argc < 3) && *pargv != '\0')
	{

		while (*pargv)
		{
			if (*pargv != ' ')
			{
				param[j] = *pargv;
				j++;
			}
			pargv++;
		}
		for (i = 0; i < 16; i++)
		{
			printf("[%c], ", param[i]);
		}
	}
}