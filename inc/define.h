/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   define.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blerouss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 14:23:49 by blerouss          #+#    #+#             */
/*   Updated: 2023/12/01 18:37:04 by blerouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DEFINE_H
# define DEFINE_H

# define ARG_ERR "Error\nNécessite une description de scène dans un \
fichier .rt en premier argument avec une ligne de description pour la caméra \
et pour la lumière d'ambiance\n" 
# define OPEN_ERR "Error\nProblème rencontré lors de l'ouverture du fichier .rt\n"
# define MAL_ERR "Error\nEchec d'allocation mémoire\n"
# define TYPE_ERR "Error\nProblème pendant l'analyse du fichier .rt, \
type inconnu ou mauvais nombre d'argument sur la ligne "
# define DTA_ERR "Error\nLes informations de l'ambiance sont déclarées \
plusieurs fois\n"
# define DTC_ERR "Error\nLes informations de la caméra sont déclarées \
plusieurs fois\n"
# define DTL_ERR "Error\nLes informations de la lumière sont déclarées \
plusieurs fois\n"
# define COL_ERR "Error\nMauvaise déclaration des couleurs RGB à la ligne "
# define FOV_ERR "Error\nMauvaise déclaration du FOV de la caméra à la ligne "
# define POS_ERR "Error\nMauvaise déclaration des coordonnées à la ligne "
# define VEC_ERR "Error\nMauvaise déclaration du vecteur à la ligne "
# define RAT_ERR "Error\nMauvaise déclaration du ratio de luminosité à la ligne "
# define DIA_ERR "Error\nMauvaise déclaration du diamètre à la ligne "
# define HEI_ERR "Error\nMauvaise déclaration de la hauteur à la ligne "
# define MLX_ERR "Error\nProbleme lors de l'utilisation des fonctions de la mlx\n"

// MACROS //

# define WIDTH 500
# define HEIGHT 500 
# define SAMPLES_PER_PIXEL 1
# define NB_THREAD 20
# define MAX_DEPTH 1
# define SPHERE 10
# define PLAN 11
# define CYLINDER 12
# define BACKGROUND 13
# define TRIANGLE 14
# define MALLOC_ERR 100
# define SPECULAR 0.003
# define DIFFUSE  0.997
# define N 50
# define TOP 1.0
# define BOT 2.0
# define CORE 3.0
# define LEFT 10
# define RIGHT 11
# define UP 12
# define DOWN 13
# define FRONT 14
# define BACK 15

// COLOR PRINT //

# define RED "\033[0;31m"
# define YELLOW "\033[0;33m"
# define GREEN "\033[0;32m"

#endif
