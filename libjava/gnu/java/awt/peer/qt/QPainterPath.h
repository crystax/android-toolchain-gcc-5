
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_java_awt_peer_qt_QPainterPath__
#define __gnu_java_awt_peer_qt_QPainterPath__

#pragma interface

#include <gnu/java/awt/peer/qt/NativeWrapper.h>
extern "Java"
{
  namespace gnu
  {
    namespace java
    {
      namespace awt
      {
        namespace peer
        {
          namespace qt
          {
              class QPainterPath;
          }
        }
      }
    }
  }
  namespace java
  {
    namespace awt
    {
        class Shape;
      namespace geom
      {
          class GeneralPath;
      }
    }
  }
}

class gnu::java::awt::peer::qt::QPainterPath : public ::gnu::java::awt::peer::qt::NativeWrapper
{

public: // actually package-private
  QPainterPath();
public:
  QPainterPath(::java::awt::Shape *);
  QPainterPath(jdouble, jdouble, jdouble, jdouble);
  QPainterPath(jdouble, jdouble, jdouble, jdouble, jboolean);
  virtual ::java::awt::geom::GeneralPath * getPath();
private:
  void init(jint);
  void moveTo(jdouble, jdouble);
  void close();
  void lineTo(jdouble, jdouble);
  void quadTo(jdouble, jdouble, jdouble, jdouble);
  void cubicTo(jdouble, jdouble, jdouble, jdouble, jdouble, jdouble);
public:
  virtual void dispose();
  virtual void finalize();
  static ::java::lang::Class class$;
};

#endif // __gnu_java_awt_peer_qt_QPainterPath__