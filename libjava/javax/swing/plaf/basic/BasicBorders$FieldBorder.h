
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_swing_plaf_basic_BasicBorders$FieldBorder__
#define __javax_swing_plaf_basic_BasicBorders$FieldBorder__

#pragma interface

#include <javax/swing/border/AbstractBorder.h>
extern "Java"
{
  namespace java
  {
    namespace awt
    {
        class Color;
        class Component;
        class Graphics;
        class Insets;
    }
  }
  namespace javax
  {
    namespace swing
    {
      namespace plaf
      {
        namespace basic
        {
            class BasicBorders$FieldBorder;
        }
      }
    }
  }
}

class javax::swing::plaf::basic::BasicBorders$FieldBorder : public ::javax::swing::border::AbstractBorder
{

public:
  BasicBorders$FieldBorder(::java::awt::Color *, ::java::awt::Color *, ::java::awt::Color *, ::java::awt::Color *);
  virtual void paintBorder(::java::awt::Component *, ::java::awt::Graphics *, jint, jint, jint, jint);
  virtual ::java::awt::Insets * getBorderInsets(::java::awt::Component *);
  virtual ::java::awt::Insets * getBorderInsets(::java::awt::Component *, ::java::awt::Insets *);
public: // actually package-private
  static const jlong serialVersionUID = 949220756998454908LL;
public: // actually protected
  ::java::awt::Color * __attribute__((aligned(__alignof__( ::javax::swing::border::AbstractBorder)))) shadow;
  ::java::awt::Color * darkShadow;
  ::java::awt::Color * highlight;
  ::java::awt::Color * lightHighlight;
public:
  static ::java::lang::Class class$;
};

#endif // __javax_swing_plaf_basic_BasicBorders$FieldBorder__
