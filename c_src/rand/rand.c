
static int seed;

void my_srand(int s)
{
	seed = s;
}

int my_rand(void)
{
	seed = seed * 1103515245 + 1345;
	
	return((unsigned)(seed/5536) % 32768);
}
