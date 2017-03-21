//
// Bareflank Hypervisor
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

#ifndef PROCESS_LIST_DATA_H
#define PROCESS_LIST_DATA_H

#include <gsl/gsl>
#include <user_data.h>

class domain;

class process_list_data : public user_data
{
public:

    process_list_data() noexcept :
        m_domain(nullptr)
    { }

    ~process_list_data() override = default;

    domain *m_domain;

public:

    process_list_data(process_list_data &&) = default;
    process_list_data &operator=(process_list_data &&) = default;

    process_list_data(const process_list_data &) = delete;
    process_list_data &operator=(const process_list_data &) = delete;
};

#endif
