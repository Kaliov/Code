int kal_putstr(char *str)
{
	int j = 0;
	
	while (str[j] != '\0')
	{
		kal_putchar(str[j]);
		j++;
	}
	return(0);
}
