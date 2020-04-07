/*
    Copyright © 2019 Michal Schulz <michal.schulz@gmx.de>
    https://github.com/michalsc

    This Source Code Form is subject to the terms of the
    Mozilla Public License, v. 2.0. If a copy of the MPL was not distributed
    with this file, You can obtain one at http://mozilla.org/MPL/2.0/.
*/

#ifndef _EMU68_CODEGENERATOR_H
#define _EMU68_CODEGENERATOR_H

#include <stdint.h>
#include <support.h>
#include <tinystl/vector>
#include <emu68/Architectures.h>
#include <emu68/Allocators.h>
#include <emu68/RegisterAllocator.h>

namespace emu68 {


template< typename arch >
class CodeGenerator {
public:
    CodeGenerator() { }
    void Emit(uint32_t opcode) { _INSN_Stream.push_back(opcode); }
private:
    tinystd::vector< uint32_t, jit_allocator<uint32_t> > _INSN_Stream;
};

}

#endif /* _EMU68_CODEGENERATOR_H */
