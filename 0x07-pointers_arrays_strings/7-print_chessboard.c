void _putchar(char c);

/**
 * print_chessboard - this function prints a chessboard
 *
 * Return: 0
 */

void print_chessboard(char (*a)[8])
{
	char column[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h'};
	char horizontal_line[] = "-----------------\n";
	char row_label[2] = {'8', '\n'};

	for (int i = 0; i < 8; i++)
	{
		_putchar(' ');
		_putchar(column[i]);
	}
	_putchar('\n');

	for (int i = 0; i < sizeof(horizontal_line) - 1; i++)
	{
		_putchar(horizontal_line[i]);
	}
	for (int i = 0; i < 8; i++)
	{
		row_label[0] = '8' - i;
		_putchar(row_label[0]);
		_putchar(' ');

		for (int j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
			_putchae(' ');
		}

		_putchar(row_label[0]);
		_putchar('\n');
	}

	for (int i = 0; i < sizeof(horozontal_line) - 1; i++)
	{
		_putchar(horizontal_line[i]);
	}

	for (int i = 0; i < 8; I++)
	{
		_putchar(' ');
		_putchar(column[i]);
	}
	_putchat('\n');
}
