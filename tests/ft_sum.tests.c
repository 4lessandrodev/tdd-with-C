#include <stdio.h>
#include "minunit.h"
#include "../src/lib.h"

int tests_run = 0;

int	ft_sum(int x, int y)
{
	return (x + y);
}

static char * should_sum_seven() {
	mu_assert("error, sum != 7", ft_sum(3, 4) == 7);
	return 0;
}

static char * should_sum_five() {
	mu_assert("error, sum != 5", ft_sum(3, 2) == 5);
	return 0;
}

static char * all_tests() {
	mu_run_test(should_sum_seven);
	mu_run_test(should_sum_five);
	return 0;
}
 
int	main(int argc, char **argv) {
	char *result = all_tests();
	if (result != 0) {
		printf("%s\n", result);
	}
	else
	{
		printf("ALL TESTS PASSED\n");
	}
	printf("Tests run: %d\n", tests_run);
 
	return result != 0;
}
