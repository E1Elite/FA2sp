#pragma once

#include <FA2PP.h>

namespace ControlHelpers
{
class ComboBox
{
public:
    static void LoadHouses(ppmfc::CComboBox& combobox, bool bShowIndex = false);
    static void LoadCountries(ppmfc::CComboBox& combobox, bool bShowIndex = false);
    static void LoadGenericList(ppmfc::CComboBox& combobox, const char* pSection, bool bShowRegName = false, bool bShowIndex = false, bool bRegNameFirst = false);
    static bool LoadSectionList(ppmfc::CComboBox& combobox, const char* pSection, int pLoadFrom = 0, bool bShowIndex = false);
    static void LoadHousesAddon(ppmfc::CComboBox& combobox, bool bShowIndex = false);
};


}