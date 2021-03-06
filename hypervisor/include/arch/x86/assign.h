/*
 * Copyright (C) 2018 Intel Corporation. All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#ifndef ASSIGN_H
#define ASSIGN_H

#include <ptdev.h>

void ptdev_intx_ack(struct vm *vm, uint8_t virt_pin,
		enum ptdev_vpin_source vpin_src);
int ptdev_msix_remap(struct vm *vm, uint16_t virt_bdf,
		struct ptdev_msi_info *info);
int ptdev_intx_pin_remap(struct vm *vm, struct ptdev_intx_info *info);
int ptdev_add_intx_remapping(struct vm *vm, uint16_t virt_bdf,
	uint16_t phys_bdf, uint8_t virt_pin, uint8_t phys_pin, bool pic_pin);
void ptdev_remove_intx_remapping(struct vm *vm, uint8_t virt_pin, bool pic_pin);
int ptdev_add_msix_remapping(struct vm *vm, uint16_t virt_bdf,
	uint16_t phys_bdf, int vector_count);
void ptdev_remove_msix_remapping(struct vm *vm, uint16_t virt_bdf,
		int vector_count);

#endif /* ASSIGN_H */
