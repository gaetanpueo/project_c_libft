/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpueo--g <gpueo--g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 12:54:04 by gpueo--g          #+#    #+#             */
/*   Updated: 2014/11/10 17:40:45 by gpueo--g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

/*
**   for function need installed library
**   you should comment all the libraries that are not installed
**   you need to execute this commande before test to be sure you malloc
**   corectly : $> export MallocScribble=1
*/

/*
**   <unistd.h>                             for write() and close()
**   <stdio.h>                              for perror() and strerror()
**   <stdlib.h>                             for free(), malloc() and exit()
**   <string.h>                             for NULL and size_t
**   <sys/types.h> <sys/uio.h> <sys/stat.h> for read()
**   <fcntl.h>                              for open()
**   <math.h>                               for all mathematic functions
**   "colors.h"                             colors in hexa, about 156 colors
**                                             for graphism
*/

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <sys/types.h>
# include <sys/uio.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <math.h>
# include "colors.h"

/*
**   defines for color in shell (ex: ft_putstr(), ft_putchar(), ...)
*/

# define C_NONE						"\033[0m"
# define C_BOLD						"\033[1m"
# define C_BLACK					"\033[30m"
# define C_RED						"\033[31m"
# define C_GREEN					"\033[32m"
# define C_BROWN					"\033[33m"
# define C_BLUE						"\033[34m"
# define C_MAGENTA					"\033[35m"
# define C_CYAN						"\033[36m"
# define C_GRAY						"\033[37m"

/*
**   defines for ft_strrep()
*/

# define REPLACE_ONCE				0x0
# define REPLACE_ALL				0x1
# define REPLACE_EMPTY				""

/*
**   defines for get_next_line()
*/

# define BUFF_SIZE					8

/*
**   <ctype.h>
**   Additional functions :
**   ft_isascii()
*/

int					ft_isalnum		(int c);
int					ft_isalpha		(int c);
int					ft_iscntrl		(int c);
int					ft_isdigit		(int c);
int					ft_isgraph		(int c);
int					ft_islower		(int c);
int					ft_isprint		(int c);
int					ft_ispunct		(int c);
int					ft_isspace		(int c);
int					ft_isupper		(int c);
int					ft_isxdigit		(int c);
int					ft_tolower		(int c);
int					ft_toupper		(int c);
int					ft_isascii		(int c);

/*
**   <stdio.h>
**   Additional functions :
**   ft_putendl() ft_putnbr() ft_putchar_fd() ft_putstr_fd() ft_putendl_fd()
**   ft_putnbr_fd() ft_putchar_error() ft_putstr_error()
*/

void				ft_putchar		(char c);
void				ft_putchar_error(char c);
void				ft_putchar_fd	(char c, int fd);
void				ft_putstr		(char const *s);
void				ft_putstr_error	(char const *s);
void				ft_putstr_fd	(char const *s, int fd);
void				ft_putendl		(char const *s);
void				ft_putendl_error(char const *s);
void				ft_putendl_fd	(char const *s, int fd);
void				ft_putnbr		(int n);
void				ft_putnbr_error	(int n);
void				ft_putnbr_fd	(int n, int fd);

/*
**   <stdlib.h>
**   Additional functions :
**   ft_sgn()
*/

char				*ft_itoa		(int n);
char				*ft_realloc		(char *old, int size);
char				*ft_realloc_o	(char *ptr, size_t old,
										size_t size);
int					ft_abs			(int x);
int					ft_sgn			(int x);
int					ft_atoi			(const char *str);
void				*ft_memalloc	(size_t size);
void				ft_memdel		(void **ap);
void				ft_memdel_2d	(char **str);

/*
**   <string.h>
*/

size_t				ft_strlcat		(char *dst, const char *src, size_t size);
size_t				ft_strlen		(const char *str);
char				*ft_strcat		(char *s1, const char *s2);
char				*ft_strncat		(char *s1, const char *s2, size_t n);
char				*ft_strchr		(const char *s, int c);
char				*ft_strcpy		(char *dst, const char *src);
char				*ft_strncpy		(char *dst, const char *src, size_t n);
char				*ft_strrchr		(const char *s, int c);
char				*ft_strstr		(const char *s1, const char *s2);
char				*ft_strnstr		(const char *s1, const char *s2, size_t n);
char				*ft_strdup		(const char *src);
int					ft_strcmp		(const char *s1, const char *s2);
int					ft_strncmp		(const char *s1, const char *s2, size_t n);
int					ft_memcmp		(const void *s1, const void *s2, size_t n);
void				*ft_memchr		(const void *s, int c, size_t n);
void				*ft_memcpy		(void *dst, const void *src, size_t n);
void				*ft_memccpy		(void *dst, const void *src, int c,
										size_t n);
void				*ft_memmove		(void *dst, const void *src, size_t len);
void				*ft_memset		(void *b, int c, size_t len);

/*
**   <strings.h>
*/

void				ft_bzero		(void *s, size_t n);

/*
**   other
*/

size_t				ft_count_digits	(int n);
char				**ft_strsplit	(char const *s, char c);
char				*ft_strrev		(char *s);
char				*ft_strnew		(size_t size);
char				*ft_strmap		(char const *s, char (*f)(char));
char				*ft_strmapi		(char const *s,
										char (*f)(unsigned int, char));
char				*ft_strsub		(char const *s, unsigned int start,
										size_t len);
char				*ft_strjoin		(char const *s1, char const *s2);
char				*ft_strtrim		(char const *s);
char				*ft_strrep		(char *str, char const *sub,
										char const *rep, int recursive);
int					ft_strequ		(char const *s1, char const *s2);
int					ft_strnequ		(char const *s1, char const *s2, size_t n);
size_t				ft_strpos		(const char *s1, const char *s2);
void				ft_strdel		(char **as);
void				ft_strclr		(char *s);
void				ft_striter		(char *s, void (*f)(char *));
void				ft_striteri		(char *s, void (*f)(unsigned int, char *));
void				ft_swap_int		(int *a, int *b);
void				ft_swap_char	(char *a, char *b);

/*
**   get_nex_line()
*/

int					get_next_line	(int const fd, char **line);

/*
**   bonus
*/

typedef struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

t_list				*ft_lstnew		(void const *content, size_t content_size);
t_list				*ft_lstmap		(t_list *lst, t_list *(*f)(t_list *elem));
void				ft_lstdelone	(t_list **alst,
										void (*del)(void*, size_t));
void				ft_lstdel		(t_list **alst,
										void (*del)(void *, size_t));
void				ft_lstadd		(t_list **alst, t_list *new);
void				ft_lstiter		(t_list *lst, void (*f)(t_list *elem));

#endif
