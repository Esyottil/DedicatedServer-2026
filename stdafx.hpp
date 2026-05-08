#pragma once

#include "MH/MinHook.h"
void MhCreateAndEnableHook(LPVOID pTarget, LPVOID pDetour, LPVOID* ppOriginal) {

    bool F1Set = false;

    while (!F1Set)
    {
        if (MH_CreateHook(pTarget, pDetour, ppOriginal) == MH_OK)
        {
            MH_EnableHook(pTarget);
            //  Data::hooks++;
            F1Set = true;
        }

        Sleep(1);
    }

}
#include <iostream>
#include <string>
#include <stdio.h>
#include "Enumerations.hpp"
#include "Classess.hpp"
#include "Startup.hpp"
