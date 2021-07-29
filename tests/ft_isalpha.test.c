#include <stdio.h>
#include "minunit.h"
#include "colors.h"
#include "../src/libft.h"

int tests_run = 0;

static char * should_3_not_be_alpha() {
	mu_assert("error, 3 != 0", ft_isalpha(3) == 0);
	return 0;
}

static char * should_0_not_be_alpha() {
	mu_assert("error, char(0) != 0", ft_isalpha('0') == 0);
	return 0;
}

static char * should_9_not_be_alpha() {
	mu_assert("error, char(9) != 0", ft_isalpha('9') == 0);
	return 0;
}

static char * should_space_not_be_alpha() {
	mu_assert("error, char(SPACE) != 0", ft_isalpha(' ') == 0);
	return 0;
}

static char * should_special_char_not_be_alpha() {
	mu_assert("error, char(#) != 0", ft_isalpha('#') == 0);
	return 0;
}

static char * should_65_be_alpha() {
	mu_assert("error, 65 != 1", ft_isalpha(65) == 1);
	return 0;
}

static char * should_70_be_alpha() {
	mu_assert("error, 70 != 1", ft_isalpha(70) == 1);
	return 0;
}

static char * should_90_be_alpha() {
	mu_assert("error, 90 != 1", ft_isalpha(90) == 1);
	return 0;
}

static char * should_95_not_be_alpha() {
	mu_assert("error, 95 != 0", ft_isalpha(95) == 0);
	return 0;
}

static char * should_97_be_alpha() {
	mu_assert("error, 97 != 1", ft_isalpha(97) == 1);
	return 0;
}

static char * should_100_be_alpha() {
	mu_assert("error, 100 != 1", ft_isalpha(100) == 1);
	return 0;
}

static char * should_122_be_alpha() {
	mu_assert("error, 122 != 1", ft_isalpha(122) == 1);
	return 0;
}

static char * all_tests() {
	mu_run_test(should_3_not_be_alpha);
	mu_run_test(should_0_not_be_alpha);
	mu_run_test(should_9_not_be_alpha);
	mu_run_test(should_space_not_be_alpha);
	mu_run_test(should_special_char_not_be_alpha);
	mu_run_test(should_65_be_alpha);
	mu_run_test(should_70_be_alpha);
	mu_run_test(should_90_be_alpha);
	mu_run_test(should_95_not_be_alpha);
	mu_run_test(should_97_be_alpha);
	mu_run_test(should_100_be_alpha);
	mu_run_test(should_122_be_alpha);
	return 0;
}

int	main(int argc, char **argv) {
	char *result = all_tests();

	printf("\n"BHBLU"[ft_isalpha] > \n");

	if (result != 0) {
		printf(BRED"[KO] "RESET"%s\n", result);
	}
	else
	{
		printf(BGRN"[OK] "RESET"ALL TESTS PASSED\n");
	}
	printf("Tests run: %d\n", tests_run);

	return result != 0;
}
