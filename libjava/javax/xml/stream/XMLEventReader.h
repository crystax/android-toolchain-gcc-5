
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_xml_stream_XMLEventReader__
#define __javax_xml_stream_XMLEventReader__

#pragma interface

#include <java/lang/Object.h>
extern "Java"
{
  namespace javax
  {
    namespace xml
    {
      namespace stream
      {
          class XMLEventReader;
        namespace events
        {
            class XMLEvent;
        }
      }
    }
  }
}

class javax::xml::stream::XMLEventReader : public ::java::lang::Object
{

public:
  virtual ::javax::xml::stream::events::XMLEvent * nextEvent() = 0;
  virtual jboolean hasNext() = 0;
  virtual ::javax::xml::stream::events::XMLEvent * peek() = 0;
  virtual ::java::lang::String * getElementText() = 0;
  virtual ::javax::xml::stream::events::XMLEvent * nextTag() = 0;
  virtual ::java::lang::Object * getProperty(::java::lang::String *) = 0;
  virtual void close() = 0;
  virtual ::java::lang::Object * next() = 0;
  virtual void remove() = 0;
  static ::java::lang::Class class$;
} __attribute__ ((java_interface));

#endif // __javax_xml_stream_XMLEventReader__
