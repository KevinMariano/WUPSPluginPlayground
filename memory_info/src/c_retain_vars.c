/****************************************************************************
 * Copyright (C) 2018 Maschell
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
 ****************************************************************************/
#include "c_retain_vars.h"

memHeapInfo     expHeapPointer[MAX_EXP_HEAP_INFOS]      __attribute__((section(".data")));
memHeapInfo     frmHeapPointer[MAX_FRM_HEAP_INFOS]      __attribute__((section(".data")));
memUnitHeapInfo unitHeapPointer[MAX_UNIT_HEAP_INFOS]    __attribute__((section(".data")));

baseHeapInfo    baseHeaphandles[MAX_BASE_HEAP_INFOS]    __attribute__((section(".data")));
blockHeapInfo   blockHeapInfos[MAX_BLOCK_HEAP_INFOS]    __attribute__((section(".data")));
memHeapInfo     userHeapInfos[MAX_USER_HEAP_INFOS]      __attribute__((section(".data")));

uint8_t gButtonComboCooldown __attribute__((section(".data"))) = 0;
