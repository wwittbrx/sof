/* SPDX-License-Identifier: BSD-3-Clause
 *
 * Copyright(c) 2019 Intel Corporation. All rights reserved.
 *
 * Author: Marcin Rajwa <marcin.rajwa@linux.intel.com>
 */

#ifndef __INCLUDE_USER_KPB_H__
#define __INCLUDE_USER_KPB_H__

/** \brief kpb component configuration data. */
struct sof_kpb_config {
	uint32_t size; /**< kpb size in bytes */
	uint32_t caps; /**< SOF_MEM_CAPS_ */
	uint32_t no_channels; /**< no of channels */
	uint32_t history_depth; /**< time of buffering in milliseconds */
	uint32_t sampling_freq; /**< frequency in hertz */
	uint32_t sampling_width; /**< number of bits */
};

#endif
