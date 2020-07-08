//
// Copyright (C) 2013-2020 Michele Segata <segata@ccs-labs.org>, Stefan Joerer <joerer@ccs-labs.org>
//
// SPDX-License-Identifier: GPL-2.0-or-later
//
// This program is free software; you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation; either version 2 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program; if not, write to the Free Software
// Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
//

#ifndef SUMOTRAFFICMANAGER_H_
#define SUMOTRAFFICMANAGER_H_

#include "plexe/mobility/TraCIBaseTrafficManager.h"

namespace plexe {

/**
 * This traffic manager, set by default, does nothing. The idea
 * is that, by default, traffic flows are managed by SUMO itself,
 * as defined in the rou.xml file
 */
class SumoTrafficManager : public TraCIBaseTrafficManager {

public:
    virtual void initialize(int stage);
    virtual void finish();

public:
    SumoTrafficManager()
    {
    }
};

} // namespace plexe

#endif /* SUMOTRAFFICMANAGER_H_ */
