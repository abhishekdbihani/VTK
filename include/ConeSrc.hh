//
// Create cone centered at origin. If resolution=0 line is created; if 
// resolution=1, single triangle; resolution=2, two crossed triangles; 
// resolution > 2, 3D cone.
//
#ifndef __vlConeSource_h
#define __vlConeSource_h

#include "PolySrc.hh"

#define MAX_RESOLUTION MAX_VERTS

class vlConeSource : public vlPolySource 
{
public:
  vlConeSource() : Resolution(6),Height(1.0),Radius(0.5),Capping(1) {};
  vlConeSource(int res) {this->Resolution=res;};
  char *GetClassName() {return "vlConeSource";};
  void Execute();

  vlSetClampMacro(Height,float,0.0,LARGE_FLOAT)
  vlGetMacro(Height,float);

  vlSetClampMacro(Radius,float,0.0,LARGE_FLOAT)
  vlGetMacro(Radius,float);

  vlSetClampMacro(Resolution,int,0,MAX_RESOLUTION)
  vlGetMacro(Resolution,int);

  vlSetMacro(Capping,int);
  vlGetMacro(Capping,int);
  vlBooleanMacro(Capping,int);

protected:
  float Height;
  float Radius;
  int Resolution;
  int Capping;

};

#endif


