/*!
 * COPYRIGHT (C) 2010 Emeric Grange - All Rights Reserved
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 * \file      main.h
 * \author    Emeric Grange <emeric.grange@gmail.com>
 * \date      2010
 */

#ifndef MINITHUMBNAILER_HEADER_H
#define MINITHUMBNAILER_HEADER_H

/* ************************************************************************** */

int main(int argc, char *argv[]);

/* ************************************************************************** */

#define VERSION_MAJOR 3
#define VERSION_MINOR 3

#define ENABLE_DEBUG  1
#define ENABLE_COLORS 1

/* ************************************************************************** */

//! Picture repartition mode
typedef enum PictureRepartition_e
{
    PICTURE_UNFILTERED  = 0,
    PICTURE_ORDERED     = 1,
    PICTURE_DISTRIBUTED = 2
} PictureRepartition_e;

//! Picture file formats
typedef enum PictureFormat_e
{
    PICTURE_UNKNOWN     = 0,
    PICTURE_JPG         = 1,
    PICTURE_PNG         = 2,
    PICTURE_BMP         = 3,
    PICTURE_TGA         = 4,
    PICTURE_YUV420      = 5,
    PICTURE_YUV444      = 6
} PictureFormat_e;

/* ************************************************************************** */

// Colors for console output
#if ENABLE_COLORS
    #define RESET  "\e[0;m" //!< Reset colored output to default terminal color
    #define RED    "\e[1;31m"
    #define GREEN  "\e[1;32m"
    #define YELLOW "\e[1;33m"
    #define BLUE   "\e[1;34m"
    #define PURPLE "\e[1;35m"
    #define CYAN   "\e[1;36m"
    #define WHITE  "\e[1;37m"
#else
    #define RESET
    #define RED
    #define GREEN
    #define YELLOW
    #define BLUE
    #define PURPLE
    #define CYAN
    #define WHITE
#endif // ENABLE_COLORS

/* ************************************************************************** */
#endif // MINITHUMBNAILER_HEADER_H
