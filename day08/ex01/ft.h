#ifndef FT_H
# define FT_H

void		ft_putstr(char *str);
int		ft_strlen(char *str);
char		*ft_strrev(char *str);
int		ft_atoi(char *str);
void		ft_sort_integer_table(int *tab, int size);
void		ft_putnbr(int nb);
char		*ft_strcpy(char *dest, char *src);
char		*ft_strncpy(char *dest, char *src, unsigned int n);
char		*ft_strstr(char *str, char *to_find);
int		ft_strcmp(char *s1, char *s2);
int		ft_strncmp(char *s1, char *s2, unsigned int n);
char		*ft_strupcase(char *str);
char		*ft_strlowcase(char *str);
char		*ft_strcapitalize(char *str);
int 		ft_str_is_alpha(char *str);
int		ft_str_is_numeric(char *str); 
int		ft_str_is_lowercase(char *str);
int 		ft_str_is_uppercase(char *str);
int 		ft_str_is_printable(char *str);
char 		*ft_strcat(char *dest, char *src);
char 		*ft_strncat(char *dest, char *src, int nb);
unsigned int 	ft_strlcat(char *dest, char *src, unsigned int size);
unsigned int 	ft_strlcpy(char *dest, char *src, unsigned int size);

#endif
