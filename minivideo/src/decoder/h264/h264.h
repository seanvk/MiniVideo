/*!
 * COPYRIGHT (C) 2010 Emeric Grange - All Rights Reserved
 *
 * This file is part of MiniVideo.
 *
 * MiniVideo is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * MiniVideo is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with MiniVideo.  If not, see <http://www.gnu.org/licenses/>.
 *
 * \file      h264.h
 * \author    Emeric Grange <emeric.grange@gmail.com>
 * \date      2010
 */

#ifndef H264_H
#define H264_H

// minivideo headers
#include "h264_decodingcontext.h"

/* ************************************************************************** */

int h264_decode(VideoFile_t *input_video,
                const char *output_directory,
                const int picture_format,
                const int picture_quality,
                const int picture_number,
                const int picture_extractionmode);

DecodingContext_t *initDecodingContext(VideoFile_t *video);
void freeDecodingContext(DecodingContext_t **dc_ptr);
int checkDecodingContext(DecodingContext_t *dc);

/* ************************************************************************** */
#endif /* H264_H */
