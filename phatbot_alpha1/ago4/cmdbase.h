/*	Agobot3 - a modular IRC bot for Win32 / Linux
	Copyright (C) 2003 Ago

	This program is free software; you can redistribute it and/or
	modify it under the terms of the GNU General Public License
	as published by the Free Software Foundation; either version 2
	of the License, or (at your option) any later version.

	This program is distributed in the hope that it will be useful,
	but WITHOUT ANY WARRANTY; without even the implied warranty of
	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
	GNU General Public License for more details.

	You should have received a copy of the GNU General Public License
	along with this program; if not, write to the Free Software
	Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA. */

#ifndef __CMDBASE_H__
#define __CMDBASE_H__

#include "message.h"

class CCommandHandler
{
public:
	virtual bool HandleCommand(CMessage *pMsg)=0;
};

typedef struct command_s
{
    CString			 sName;
    CString			 sDescription;
	CCommandHandler	*pHandler;
	bool			 bFallBack;
} command;

#endif // __CMDBASE_H__
