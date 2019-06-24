/*
	This file is part of solidity.

	solidity is free software: you can redistribute it and/or modify
	it under the terms of the GNU General Public License as published by
	the Free Software Foundation, either version 3 of the License, or
	(at your option) any later version.

	solidity is distributed in the hope that it will be useful,
	but WITHOUT ANY WARRANTY; without even the implied warranty of
	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
	GNU General Public License for more details.

	You should have received a copy of the GNU General Public License
	along with solidity.  If not, see <http://www.gnu.org/licenses/>.
*/
/** @file SwarmHash.h
 */

#pragma once

#include <libdevcore/FixedHash.h>

#include <string>

namespace dev
{

/// Compute the "swarm hash" of @a _input (OLD 0x1000-section version)
h256 swarmHash(std::string const& _input);

/// Comput the "bzz hash" of @a _input (the NEW binary / BMT version)
h256 bzzHash(bytes const& _input);

inline h256 bzzHash(std::string const& _input)
{
	return bzzHash(asBytes(_input));
}

}
