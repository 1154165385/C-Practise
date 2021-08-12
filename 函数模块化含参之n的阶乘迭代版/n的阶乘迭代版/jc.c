int jc(int x)
{
	if (x > 0)
		return x * jc(x-1);
	else
		return 1;
}