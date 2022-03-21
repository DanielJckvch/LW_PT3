#include "Rouble.h"

rouble::rouble(void)
{
	base_ctr++;
}

rouble:: ~rouble(void)
{
	base_ctr--;
}

int rouble::getbasectr(void)
{
	return base_ctr;
}

int rouble::base_ctr = 0;

