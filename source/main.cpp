/*
 *   This file is part of lpp-3ds-next
 *   based on https://github.com/Rinnegatamante/lpp-3ds/
 *   Copyright (C) 2021-2023 Tobi-D7
 */

#include "include/luaplayer.hpp"
#include <3ds.h>
#include <stdio.h>
#include <string.h>
#include <ErrorHelper.hpp>

bool ftp_state;

bool isTopLCDOn = true;
bool isBottomLCDOn = true;

int main(int argc, char **argv)
{
    aptInit();
    cfguInit();
    romfsInit();
    ErrorHelper::SetupDirectories();
    gfxInitDefault();
    consoleInit(GFX_BOTTOM, NULL);
    Run("sdmc:/index.lua");
    
    cfguExit();
    romfsExit();
    aptExit();
    return 0;
}