#include "tbox.h"

int main(int argc, char** argv)
{
	if (!tb_init(malloc(1024 * 1024), 1024 * 1024)) return 0;


	return 0;
}
