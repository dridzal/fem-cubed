#ifndef _FEM3_SOLVERS_OperatorRequestCallback_hpp_
#define _FEM3_SOLVERS_OperatorRequestCallback_hpp_

#include <string>

#include "Teko_Utilities.hpp"
#include "Teko_RequestHandler.hpp"
#include "Teko_RequestCallback.hpp"

#include "Panzer_GlobalEvaluationDataContainer.hpp"

namespace FEM3 {

class OperatorRequestCallback : public Teko::RequestCallback<Teko::LinearOp> {
public:
   OperatorRequestCallback(const Teuchos::RCP<const panzer::GlobalEvaluationDataContainer> & gedc, const bool & matrix_out);
   
   // RequestCallback member functions
   ///////////////////////////////////////////

   Teko::LinearOp request(const Teko::RequestMesg & rm);

   bool handlesRequest(const Teko::RequestMesg & rm);

   void preRequest(const Teko::RequestMesg & rm);

   void writeOut(const std::string & s,const Thyra::LinearOpBase<double> & op) const;

private:
   Teuchos::RCP<const panzer::GlobalEvaluationDataContainer> gedc_;

   bool matrix_output;
};

}

#endif
