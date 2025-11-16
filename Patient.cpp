#include "Patient.h"
#include <iostream>

bool IsDischarged(Patient a) {
    if (a.get_dischargeDate() != -1)
        return true;
    return false;
}