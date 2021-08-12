int lj(int (*func)(int),int k)
{
	if (k > 0)
		return func(k) + lj(func, (k-1));
	else
		return 0;
}