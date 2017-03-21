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

#ifndef TEST_H
#define TEST_H

#include <unittest.h>

class hyperkernel_ut : public unittest
{
public:

    hyperkernel_ut();
    ~hyperkernel_ut() override = default;

protected:

    bool init() override;
    bool fini() override;
    bool list() override;

public:

    hyperkernel_ut(hyperkernel_ut &&) = default;
    hyperkernel_ut &operator=(hyperkernel_ut &&) = default;

    hyperkernel_ut(const hyperkernel_ut &) = delete;
    hyperkernel_ut &operator=(const hyperkernel_ut &) = delete;
};

#endif
