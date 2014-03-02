#ifndef THREE_RENDERER_PARAMETERS_HPP
#define THREE_RENDERER_PARAMETERS_HPP

#include <three/common.hpp>
#include <three/constants.hpp>

#include <three/math/color.hpp>

namespace three {

struct RendererParameters {
  RendererParameters()
  : width( 1024 ), height( 768 ),
    vsync ( true ),
    precision( enums::PrecisionHigh ),
    alpha( true ),
    premultipliedAlpha( true ),
    antialias( false ),
    stencil( true ),
    preserveDrawingBuffer( false ),
    clearColor( 0 ),
    clearAlpha( 0 ),
    maxLights( 4 ) { }

  int width, height;
  bool vsync;
  enums::PrecisionType precision;
  bool alpha;
  bool premultipliedAlpha;
  bool antialias;
  bool stencil;
  bool preserveDrawingBuffer;
  Color clearColor;
  float clearAlpha;
  int maxLights;
};

} // namespace three

#endif // THREE_RENDERER_PARAMETERS_HPP