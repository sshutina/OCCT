// Created on: 1998-06-30
// Created by: Administrateur Atelier XSTEP
// Copyright (c) 1998-1999 Matra Datavision
// Copyright (c) 1999-2014 OPEN CASCADE SAS
//
// This file is part of Open CASCADE Technology software library.
//
// This library is free software; you can redistribute it and/or modify it under
// the terms of the GNU Lesser General Public License version 2.1 as published
// by the Free Software Foundation, with special exception defined in the file
// OCCT_LGPL_EXCEPTION.txt. Consult the file LICENSE_LGPL_21.txt included in OCCT
// distribution for complete text of the license and disclaimer of any warranty.
//
// Alternatively, this file may be used under the terms of Open CASCADE
// commercial license or contractual agreement.

#ifndef _StepRepr_PromissoryUsageOccurrence_HeaderFile
#define _StepRepr_PromissoryUsageOccurrence_HeaderFile

#include <Standard.hxx>

#include <StepRepr_AssemblyComponentUsage.hxx>

class StepRepr_PromissoryUsageOccurrence;
DEFINE_STANDARD_HANDLE(StepRepr_PromissoryUsageOccurrence, StepRepr_AssemblyComponentUsage)

class StepRepr_PromissoryUsageOccurrence : public StepRepr_AssemblyComponentUsage
{

public:
  Standard_EXPORT StepRepr_PromissoryUsageOccurrence();

  DEFINE_STANDARD_RTTIEXT(StepRepr_PromissoryUsageOccurrence, StepRepr_AssemblyComponentUsage)

protected:
private:
};

#endif // _StepRepr_PromissoryUsageOccurrence_HeaderFile
