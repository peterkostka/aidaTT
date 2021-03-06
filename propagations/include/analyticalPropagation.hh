#ifndef ANALYTICALPROPAGATION_HH
#define ANALYTICALPROPAGATION_HH

#include "IPropagation.hh"
#include "fiveByFiveMatrix.hh"
#include "Vector3D.hh"

namespace aidaTT
{

  class analyticalPropagation : public IPropagation {

    virtual bool  getJacobian(fiveByFiveMatrix& jacobian, double dw, double qop, 
			      const Vector3D& tstart, const Vector3D& tend, 
			      const Vector3D& bfield, double NrjLoss );
  };

}

#endif //ANALYTICALPROPAGATION_HH
