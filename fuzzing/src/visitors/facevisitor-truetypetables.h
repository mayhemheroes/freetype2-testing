// facevisitor-truetypetables.h
//
//   Access TrueType tables.
//
//   Drivers:
//     - CFF
//     - TrueType
//
// Copyright 2018 by
// Armin Hasitzka.
//
// This file is part of the FreeType project, and may only be used,
// modified, and distributed under the terms of the FreeType project
// license, LICENSE.TXT.  By continuing to use, modify, or distribute
// this file you indicate that you have read the license and
// understand and accept it fully.


#ifndef VISITORS_FACE_VISITOR_TRUETYPE_TABLES_H_
#define VISITORS_FACE_VISITOR_TRUETYPE_TABLES_H_


#include "utils/utils.h"
#include "visitors/facevisitor.h"


  using namespace std;


  class FaceVisitorTrueTypeTables
  : public FaceVisitor
  {
  public:


    FaceVisitorTrueTypeTables( void ) {}


    FaceVisitorTrueTypeTables(
      const FaceVisitorTrueTypeTables& ) = delete;
    FaceVisitorTrueTypeTables& operator= (
      const FaceVisitorTrueTypeTables& ) = delete;


    virtual
    ~FaceVisitorTrueTypeTables( void ) {}


    void
    run( Unique_FT_Face  face )
    override;
  };


#endif // VISITORS_FACE_VISITOR_TRUETYPE_TABLES_H_