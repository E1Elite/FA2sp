#include "Body.h"

#include <Helpers/Macro.h>

#include "../../Helpers/Translations.h"

DEFINE_HOOK(502E66, CTriggerOption_OnInitDialog_RepeatTypeFix, 7)
{
    GET(CTriggerOption*, pThis, ESI);

    pThis->CCBHouse.DeleteAllStrings();
    pThis->CCBRepeatType.DeleteAllStrings();

    pThis->CCBRepeatType.AddString(Translations::TranslateOrDefault("TriggerRepeatType.OneTimeOr", "0 - Volatile (Any attached satisfy, fire once)"));
    pThis->CCBRepeatType.AddString(Translations::TranslateOrDefault("TriggerRepeatType.OneTimeAnd", "1 - Semi-persistent (All attached satisfy, fire once)"));
    pThis->CCBRepeatType.AddString(Translations::TranslateOrDefault("TriggerRepeatType.RepeatingOr", "2 - Persistent (Any attached satisfy, fire repeatedly)"));

    return 0;
}
