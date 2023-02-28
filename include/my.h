/*
** EPITECH PROJECT, 2022
** my.h
** File description:
** header prototype function
*/

#include <stdarg.h>

#ifndef MY_H_
    #define MY_H_

void my_putchar(char c);
char *my_strstr(char *str, char const *to_find);
int my_isneg(int nb);
int my_strcmp(char const *s1, char const *s2);
int my_putnbr(long long int nbr);
int my_strncmp(char const *s1, char const *s2, int n);
void my_swap(int *a, int *b);
char *my_strupcase(char *str);
int my_putstr(char const *str);
char *my_strlowcase(char *str);
int my_strlen(char const *str);
char *my_strcapitalize(char *str);
int my_getnbr(char const *str);
int my_str_isalpha(char const *str);
void my_sort_int_array(int *tab, int size);
int my_str_isnum(char const *str);
int my_compute_power_rec(int nb, int power);
int my_str_islower(char const *str);
int my_compute_square_root(int nb);
int my_str_isupper(char const *str);
int my_is_prime(int nb);
int my_str_isprintable(char const *str);
int my_find_prime_sup(int nb);
int my_showstr(char const *str);
char *my_strcpy(char *dest, char const *src);
int my_showmem(char const *str, int size);
char *my_strncpy(char *dest, char const *src, int n);
char *my_strcat(char *dest, char const *src);
char *my_revstr(char *str);
char *my_strncat(char *dest, char const *src, int nb);
int count(int d);
int my_putnbr_base8(int nbr);
int my_putnbr_base8_modif(int nbr);
int my_putnbr_base_hexa_maj(int nbr);
int my_putnbr_base_hexa_min(int nbr);
int my_putnbr_binary(int nbr);
int flag_n(int o, va_list ap, int precis);
int my_putnbr_base_hexa_min_for_p(int nbr);
int flag_decimal(va_list ap, int precis);
int flag_integer(va_list ap, int precis);
int flag_octal(va_list ap, int precis);
int flag_pourcent(va_list ap, int precis);
int flag_string(va_list ap, int precis);
int flag_character(va_list ap, int precis);
int flag_unsigned(va_list ap, int precis);
int flag_hexa_min(va_list ap, int precis);
int flag_hexa_maj(va_list ap, int precis);
int flag_binary(va_list ap, int precis);
int flag_pointer(va_list ap, int precis);
int flag_s_maj(va_list ap, int precis);
int my_printf(const char *format, ...);
int flag_float(va_list ap, int precis);
int flag_expo_min(va_list ap, int precis);
int recupprecis(const char *format, va_list ap, int i);
int calculs_float(double f, long long int nd, int precis);
int flag_expo_maj(va_list ap, int precis);
char putexpo_maj (int negoupos, int compt);
int printfloat_maj(double exp, int precis);
int multioudivis_maj(double exp, long long int nds, int precis);
char **my_str_to_word_array(char const *str, char selecteur);
int my_show_word_array(char *const *tab);
char *my_strdup(char *str);
void free_array_of_string(char **tab, int nb_cols);
char *convert_lower(char *str);
char **reverse_tab(char** tab, int count);
char **my_strdup_array_of_string(char **arr, int nb_rows, int nb_cols);
char *remove_char(char *str, char not_allowed_char);
char *int_to_string(int number);

#endif /* MY_H_ */
