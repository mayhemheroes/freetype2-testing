// bdf-render.h
//
//   Render BDF faces.
//
// Copyright 2018 by
// Armin Hasitzka.
//
// This file is part of the FreeType project, and may only be used,
// modified, and distributed under the terms of the FreeType project
// license, LICENSE.TXT.  By continuing to use, modify, or distribute
// this file you indicate that you have read the license and
// understand and accept it fully.


#ifndef TARGETS_FONT_DRIVERS_BDF_RENDER_H_
#define TARGETS_FONT_DRIVERS_BDF_RENDER_H_


#include "targets/base.h"


  class BdfRenderFuzzTarget
  : public FuzzTarget
  {
  public:


    BdfRenderFuzzTarget( void );


  private:


    static const FT_Long  NUM_USED_BITMAPS;
  };


#endif // TARGETS_FONT_DRIVERS_BDF_RENDER_H_
