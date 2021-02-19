/* This file is part of the dynarmic project.
 * Copyright (c) 2016 MerryMage
 * SPDX-License-Identifier: 0BSD
 */

#include "frontend/A32/translate/impl/translate_thumb.h"

namespace Dynarmic::A32 {

bool ThumbTranslatorVisitor::thumb32_DMB([[maybe_unused]] Imm<4> option) {
    ir.DataMemoryBarrier();
    return true;
}

bool ThumbTranslatorVisitor::thumb32_DSB([[maybe_unused]] Imm<4> option) {
    ir.DataSynchronizationBarrier();
    return true;
}

bool ThumbTranslatorVisitor::thumb32_UDF() {
    return thumb16_UDF();
}

} // namespace Dynarmic::A32
