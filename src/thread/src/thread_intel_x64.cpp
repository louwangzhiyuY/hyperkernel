//
// Bareflank Hyperkernel
//
// Copyright (C) 2015 Assured Information Security, Inc.
// Author: Rian Quinn        <quinnr@ainfosec.com>
// Author: Brendan Kerrigan  <kerriganb@ainfosec.com>
//
// This library is free software; you can redistribute it and/or
// modify it under the terms of the GNU Lesser General Public
// License as published by the Free Software Foundation; either
// version 2.1 of the License, or (at your option) any later version.
//
// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
// Lesser General Public License for more details.
//
// You should have received a copy of the GNU Lesser General Public
// License along with this library; if not, write to the Free Software
// Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA

#include <debug.h>
#include <thread/thread_intel_x64.h>

thread_intel_x64::thread_intel_x64(threadid::type id, gsl::not_null<process *> proc) :
    thread(id, proc),
    m_stack{},
    m_state_save{}
{ }

void
thread_intel_x64::set_info(
    uintptr_t entry,
    uintptr_t stack,
    uintptr_t arg1,
    uintptr_t arg2)
{
    m_state_save.rip = entry;
    m_state_save.rsp = stack;
    m_state_save.rdi = arg1;
    m_state_save.rsi = arg2;

    m_stack = stack;
}
