// facevisitor-autohinter.h
//
//   Load glyphs with the autohinter.
//
//   Drivers: all
//
// Copyright 2018 by
// Armin Hasitzka.
//
// This file is part of the FreeType project, and may only be used,
// modified, and distributed under the terms of the FreeType project
// license, LICENSE.TXT.  By continuing to use, modify, or distribute
// this file you indicate that you have read the license and
// understand and accept it fully.


#ifndef VISITORS_FACE_VISITOR_AUTOHINTER_H_
#define VISITORS_FACE_VISITOR_AUTOHINTER_H_


#include <vector>

#include "utils/utils.h"
#include "visitors/facevisitor.h"


  using namespace std;


  class FaceVisitorAutohinter
  : public FaceVisitor
  {
  public:


    FaceVisitorAutohinter( void ) {}


    FaceVisitorAutohinter( const FaceVisitorAutohinter& ) = delete;
    FaceVisitorAutohinter& operator= (
      const FaceVisitorAutohinter& ) = delete;


    virtual
    ~FaceVisitorAutohinter( void ) {}


    void
    run( Unique_FT_Face  face )
    override;


  private:


    static const FT_Long  GLYPH_INDEX_MAX = 30;

    FT_Int32  load_flags = FT_LOAD_FORCE_AUTOHINT | FT_LOAD_RENDER;

    FT_Bool          default_warping = 0;
    vector<FT_Bool>  warpings{ 0, 1 };


    void
    set_property( Unique_FT_Face&  face,
                  const string     property_name,
                  const void*      value );

    void
    load_glyphs( Unique_FT_Face&  face );
  };


#endif // VISITORS_FACE_VISITOR_AUTOHINTER_H_