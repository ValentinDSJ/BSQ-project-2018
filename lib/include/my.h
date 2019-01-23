/*
** EPITECH PROJECT, 2018
** my
** File description:
** my fctns
*/

#ifndef MY_H_
#define MY_H_

#define CharToI(y) ((y) - '0')
#define IntToC(y) ((y) + '0')

#define SYNTAX_ERROR_MSG "syntax error"
#define ERROR_MSG "error"

void my_putchar(char c);
int my_isneg(int nb);
int my_put_nbr(long nb);
int my_put_unbr(unsigned int nb);
void my_swap(int *a, int *b);
int my_putstr(char const *str);
int my_strlen(char const *str);
int my_getnbr(char const *str, int from);
int *my_getnbr_all(char const *string);
void my_sort_int_array(int *tab, int size);
int my_compute_power_rec(int nb, int size);
int my_compute_square_root(int nb);
int my_is_prime(int nb);
int my_find_prime_sup(int nb);
char *my_strcpy(char *dest, char const *src);
char *my_strncpy(char *dest, char const *src, int n);
char *my_revstr(char *str);
char *my_strstr(char *str, char const *to_find);
int my_strcmp(char const *s1, char const *s2);
int my_strncmp(char const *s1, char const *s2, int n);
char *my_strupcase(char *str);
char *my_strlowcase(char *str);
char *my_strcapitalize(char *str);
char *converter(char *string);
int my_str_isalpha(char const *str);
int my_str_isnum(char const *str);
int my_str_islower(char const *str);
int my_str_isupper(char const *str);
int my_str_isprintable(char const *str);
int my_showstr(char const *str);
int my_showmem(char const *str, int size);
char *my_strcat(char *dest, char const *src);
char *my_strncat(char *dest, char const *src, int nb);
char *infinadd(char *s1, char *s2);
int infinsub(int ac, char **argv);
int my_cinum(char c);
char *my_strdup(const char *str);
char *my_strcpy_and_del(char *dest, char *src, int entry, int exit);
int my_putstrfrom(char const *str, int from , int to);
char *my_getop(char *op);
char *my_strcpy_to(char *dest, char const *src, int to);
char *my_strcpy_from(char *dest, char const *src, int from, int to);
int int_size(int nbr);
int *tab_deleter(int string[], int index);
char *string_deleter(char *string, int index);
char *my_putnbr_string(int nb);
int char_isnum(char c);
char *neg_remover(char *string);
char *neg_adder(char *string);
void my_putnbr_tostring(int tab[]);
char *full_converter(char *string, char *op_string, char *num_string);
char *convert_back(char *string, char *num_string);
int help(void);
char **string_to_tab(char *string);
char **string_tab_del(char **string, int index);
char *multinf(char *s1, char *s2);
char *eval_expr(char const *str);
int prev_char(char const *string, int index);
char *do_op(char *first_num, char *sec_num, char s3);
int prev_ele(char const *string, int index);
char *infisub(char *s1, char *s2);
int compare_string(char *s1, char *s2);
int my_tablen(char **tab);
char *divinf_main(char *s1, char *s2);
char *divinf(char *s1, char *s2);
char *modinf(char *s1, char *s2);

int base_error(char const *op_string, char const *num_string);
int sum_stdarg(int i, int nb, ...);
int disp_stdarg(char *s, ...);
void base(long nb, int base);
int my_printf(char *str, ...);
void non_print_to_oct(char *string);
#endif
