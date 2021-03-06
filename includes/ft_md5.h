/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_md5.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juspende <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 13:38:32 by juspende          #+#    #+#             */
/*   Updated: 2019/04/15 13:24:00 by juspende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_MD5_H

# define FT_MD5_H

# include <string.h>
# include <stdint.h>
# include <stdio.h>
# include <stdlib.h>
# include "ft_ssl.h"

# define A 0
# define B 1
# define C 2
# define D 3
# define F(B, C, D) ((B) & (C)) | (~(B) & (D))
# define G(B, C, D) ((B) & (D)) | ((C) & ~(D))
# define H(B, C, D) (B) ^ (C) ^ (D)
# define I(B, C, D) (C) ^ (B | ~(D))
# define UINT32_BIT (sizeof(uint_32_t) * 8)
# define LEFTROTATE(x, c) (((x) << (c)) | ((x) >> (32 - (c))))
# define MD5_ROTA 1000000

typedef struct	s_md5
{
	uint32_t	buffer[8];
	uint32_t	len_bytes;
	uint32_t	len_bits;
}				t_md5;

static const uint32_t	(g_k[64]) =
{	0xd76aa478, 0xe8c7b756, 0x242070db, 0xc1bdceee,
	0xf57c0faf, 0x4787c62a, 0xa8304613, 0xfd469501,
	0x698098d8, 0x8b44f7af, 0xffff5bb1, 0x895cd7be,
	0x6b901122, 0xfd987193, 0xa679438e, 0x49b40821,
	0xf61e2562, 0xc040b340, 0x265e5a51, 0xe9b6c7aa,
	0xd62f105d, 0x02441453, 0xd8a1e681, 0xe7d3fbc8,
	0x21e1cde6, 0xc33707d6, 0xf4d50d87, 0x455a14ed,
	0xa9e3e905, 0xfcefa3f8, 0x676f02d9, 0x8d2a4c8a,
	0xfffa3942, 0x8771f681, 0x6d9d6122, 0xfde5380c,
	0xa4beea44, 0x4bdecfa9, 0xf6bb4b60, 0xbebfbc70,
	0x289b7ec6, 0xeaa127fa, 0xd4ef3085, 0x04881d05,
	0xd9d4d039, 0xe6db99e5, 0x1fa27cf8, 0xc4ac5665,
	0xf4292244, 0x432aff97, 0xab9423a7, 0xfc93a039,
	0x655b59c3, 0x8f0ccc92, 0xffeff47d, 0x85845dd1,
	0x6fa87e4f, 0xfe2ce6e0, 0xa3014314, 0x4e0811a1,
	0xf7537e82, 0xbd3af235, 0x2ad7d2bb, 0xeb86d391};

static const uint32_t	(g_r[]) =
{	7, 12, 17, 22, 7, 12, 17, 22, 7, 12, 17, 22, 7, 12, 17, 22,
	5, 9, 14, 20, 5, 9, 14, 20, 5, 9, 14, 20, 5, 9, 14, 20,
	4, 11, 16, 23, 4, 11, 16, 23, 4, 11, 16, 23, 4, 11, 16, 23,
	6, 10, 15, 21, 6, 10, 15, 21, 6, 10, 15, 21, 6, 10, 15, 21};

void			initialize_md5(t_md5 *md5_c);
uint32_t		to_int32(const uint8_t *bytes);
void			to_bytes(uint32_t val, uint8_t *bytes);
void			ft_md5(uint8_t *initial, size_t len, uint8_t *digest);

#endif
