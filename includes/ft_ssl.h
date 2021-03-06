/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ssl.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juspende <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/12 17:17:51 by juspende          #+#    #+#             */
/*   Updated: 2019/04/16 10:27:36 by juspende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_SSL_H

# define FT_SSL_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include "get_next_line.h"
# include "../libft/includes/libft.h"
# include "../free_all/include/ft_freeall.h"

# ifndef EXIT_HELP
#  define EXIT_HELP 42
# endif

# ifndef MAX_FILES
#  define MAX_FILES 10
# endif

# ifndef SEG
#  define SEG -2
# endif

# ifndef TRUE
#  define TRUE 1
# endif

# ifndef BUFSIZE
#  define BUFSIZE 96
# endif

# define MD5 1
# define SHA256 2
# define SHA512 3
# define WHIRPOOL 4

typedef struct	s_ssl
{
	int			c_stdin;
	int			output;
	int			md5;
	int			sha256;
	int			sha512;
	int			whirlpool;
	char		**filenames;
	char		**to_hash;
	uint32_t	*f_size;
	int			size_printed;
}				t_ssl;

typedef struct	s_ssl_flag
{
	int			p;
	int			q;
	int			r;
	int			s;
	int			h;
	int			v;
}				t_ssl_flag;

void			init_tmp_words(uint32_t *w, uint32_t *block);
size_t			bytenum(size_t len);
uint32_t		swap_int32(const uint32_t value);
int				main(int argc, char **argv);
int				io(t_ssl *ssl, t_ssl_flag *flag);
void			output(uint32_t *hash, t_ssl *ssl, t_ssl_flag *ssl_flag,
				int index);
void			md5(t_ssl *ssl, t_ssl_flag *ssl_flag);
void			sha256(t_ssl *ssl, t_ssl_flag *ssl_flag);
void			sha512(t_ssl *ssl, t_ssl_flag *ssl_flag);
void			whirlpool(t_ssl *ssl, t_ssl_flag *ssl_flag);

#endif
