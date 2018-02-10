/*
 * mock_spells_Problem.h part of VCMI engine
 *
 * Authors: listed in file AUTHORS in main folder
 *
 * License: GNU General Public License v2.0 or later
 * Full text of license available in license.txt file, in main folder
 *
 */

#pragma once

#include "../../lib/spells/Magic.h"

namespace spells
{

class ProblemMock : public Problem
{
public:
	void add(MetaString && description, Severity severity = CRITICAL) override
	{
		//TODO: do something with description
		add(severity);
	}
	MOCK_METHOD1(add, void(Severity));
	MOCK_CONST_METHOD1(getAll, void(std::vector<std::string> &));
};

}