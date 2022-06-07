//
// Copyright (C) 2018-2021 Julian Heinovski <julian.heinovski@ccs-labs.org>
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
#pragma once

#include "plexe/scenarios/BaseScenario.h"
#include "plexe/apps/GettingStartedApp.h"

namespace plexe {

class GettingStartedScenario : public BaseScenario {

protected:
    // leader average speed
    double leaderSpeed;
    // application layer, used to stop the simulation
    GettingStartedApp* appl;

private:
    cMessage* startBreaking;
    cMessage* checkDistance;

public:
    virtual void initialize(int stage) override;
    virtual void handleMessage(cMessage* msg) override;
    virtual ~GettingStartedScenario();
    GettingStartedScenario()
        : leaderSpeed(0)
        , appl(nullptr){};
};

} // namespace plexe

