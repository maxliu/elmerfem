/*  
   ElmerFront - A graphical user interface of Elmer software
   Copyright (C) 1995- , CSC - IT Center for Science Ltd.

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
   Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
*/

/***********************************************************************
Program:    ELMER Front
Module:     ecif_solver.cpp
Language:   C++
Date:       01.10.98
Version:    1.00
Author(s):  Martti Verho
Revisions:

Abstract:   Implementation

************************************************************************/

#include "ecif_constant.h"
#include "ecif_model.h"
#include "ecif_parameterField.h"

//Initialize static class variables.
int Constant::last_id = 0;
Model* Constant::model = NULL;


// Constructors
Constant::Constant()
{
}


Constant::Constant(int pid) : Parameter(pid)
{
}


Constant::Constant(int pid, char* data_string, char* param_name)
{
  setData(pid, data_string, param_name);
}


void
Constant::initClass(Model* mdl)
{
  Constant::model = mdl;
  Constant::last_id = 0;
}


void
Constant::setName(char* param_name)
{
  Parameter::setName(param_name, "Constant");
}



