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

#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <malloc.h>
#include <wups.h>
#include <stdio.h>
#include <nsysnet/socket.h>

#include <utils/logger.h>
#include "main.h"

WUPS_PLUGIN_NAME("Overlay test");
WUPS_PLUGIN_DESCRIPTION("Just an overlay test. Press A,B,X and Y and a text should appear.");
WUPS_PLUGIN_VERSION("v0.1");
WUPS_PLUGIN_AUTHOR("Maschell");
WUPS_PLUGIN_LICENSE("GPL");

/*
    To be able to create overlays
*/
WUPS_ALLOW_OVERLAY()

/* Entry point */
ON_APPLICATION_START(args){
    socket_lib_init();
    log_init();
    
    DEBUG_FUNCTION_LINE("OVERLAYTEST INIT DONE.\n");
}